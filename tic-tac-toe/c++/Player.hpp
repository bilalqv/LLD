#ifndef PLAYER_H
#define PLAYER_H

#include <string>
#include "Piece.hpp"
using namespace std;

class Player
{
    Piece piece;
    string name;

public:
    Player();
    Player(Piece piece, string name);
    Piece getPiece();
    void setPiece(Piece piece);
    string getName();
    void setName(string name);
};
#endif