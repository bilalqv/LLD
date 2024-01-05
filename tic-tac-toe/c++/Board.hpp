#ifndef BOARD_H
#define BOARD_H

#include <bits/stdc++.h>
#include "Piece.hpp"
using namespace std;

class Board
{
    int size;
    vector<vector<Piece>> board;

public:
    Board(int size);

    int getSize();
    void setSize(int size);
    vector<vector<Piece>> getBoard();
    void setBoard(int size);

    bool addPiece(Piece piece, int x, int y);

    bool movePiece(Piece piece, int x, int y);

    int getEmptyPositions();

    void printBoard();
};

#endif