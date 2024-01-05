#ifndef GAME_H
#define GAME_H

#include "Player.hpp"
#include "Board.hpp"
using namespace std;

class Game
{
    deque<Player> players;
    Board gameBoard;

public:
    Game(Player A, Player B, Board board);

    deque<Player> getPlayers();
    void setPlayers(Player A, Player B);
    Board getBoard();
    void setBoard(Board board);



    bool isGameCompleted();

    bool isGameWon(int r, int c, Piece piece);

    void startGame();
};

#endif