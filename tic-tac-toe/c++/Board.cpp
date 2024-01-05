#include <bits/stdc++.h>
#include "Board.hpp"

using namespace std;

Board::Board(int size) : size(size)
{
    setBoard(size);
}

int Board::getSize()
{
    return size;
}

void Board::setSize(int size)
{
    this->size = size;
}

vector<vector<Piece>> Board::getBoard()
{
    return board;
}

void Board::setBoard(int size)
{
    board = vector<vector<Piece>>(size, vector<Piece>(size, Piece(EMPTY)));
}

bool Board::addPiece(Piece piece, int x, int y)
{
    if (board[x][y].getType() == EMPTY)
    {
        board[x][y] = piece;
        return true;
    }
    return false;
}

bool Board::movePiece(Piece piece, int x, int y)
{
    if (x < 0 || x >= size || y < 0 || y >= size)
    {
        return false;
    }
    if (board[x][y].getType() == EMPTY)
    {
        board[x][y] = piece.getType();
        return true;
    }
    return false;
}

int Board::getEmptyPositions()
{
    int emptyPositions = 0;
    for (int i = 0; i < board.size(); i++)
    {
        for (int j = 0; j < board.size(); j++)
        {
            if (board[i][j].getType() == EMPTY)
            {
                emptyPositions++;
            }
        }
    }
    return emptyPositions;
}

void Board::printBoard()
{
    for (int i = 0; i < board.size(); i++)
    {
        cout << "| ";
        for (int j = 0; j < board.size(); j++)
        {
            cout << (char)board[i][j].getType() << " | ";
        }
        cout << endl;
    }
}