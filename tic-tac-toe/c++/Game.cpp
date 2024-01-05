#include <bits/stdc++.h>
#include "Game.hpp"
#include "Player.hpp"
#include "Board.hpp"
#include "Piece.hpp"
#include "PieceType.hpp"

using namespace std;

Game::Game(Player A, Player B, Board board) : gameBoard(board)
{
    players.push_back(A);
    players.push_back(B);
}

deque<Player> Game::getPlayers()
{
    return players;
}

void Game::setPlayers(Player A, Player B)
{
    players.push_back(A);
    players.push_back(B);
}

Board Game::getBoard()
{
    return gameBoard;
}

void Game::setBoard(Board board)
{
    gameBoard = board;
}

void Game::startGame()
{
    cout << "Game started!" << endl;

    bool gameCompleted = false;
    while (!gameCompleted)
    {
        gameBoard.printBoard();
        Player player = players.front();
        players.pop_front();
        players.push_back(player);
        int x, y;
        cout << "Player " << player.getName() << " x, y: ";
        cin >> x >> y;
        bool isSuccess = gameBoard.movePiece(player.getPiece(), x, y);
        if (!isSuccess)
        {
            cout << "Invalid move!" << endl;
            players.push_front(player);
            continue;
        }
        else
        {
            if (isGameWon(x, y, player.getPiece()))
            {
                cout << "-- Player " << player.getName() << " won! --" << endl;
                gameBoard.printBoard();
                break;
            }
        }
    }
    cout << "Game completed!" << endl;
}

bool Game::isGameWon(int r, int c, Piece piece)
{
    int n = gameBoard.getSize();
    bool isRowCompleted = true;
    bool isColCompleted = true;
    bool isDiagCompleted = true;
    bool isRevDiagCompleted = true;
    for (int i = 0; i < n; i++)
    {
        cout << gameBoard.getBoard()[r][i].getType() << ", " << piece.getType() << endl;
        if (gameBoard.getBoard()[r][i].getType() != piece.getType())
        {

            isRowCompleted = false;
        }
        if (gameBoard.getBoard()[i][c].getType() != piece.getType())
        {
            isColCompleted = false;
        }
        if (gameBoard.getBoard()[i][i].getType() != piece.getType())
        {
            isDiagCompleted = false;
        }
        if (gameBoard.getBoard()[i][n - i - 1].getType() != piece.getType())
        {
            isRevDiagCompleted = false;
        }
    }
    return isRowCompleted || isColCompleted || isDiagCompleted || isRevDiagCompleted;
}

bool Game::isGameCompleted()
{
    return gameBoard.getEmptyPositions() == 0;
}
