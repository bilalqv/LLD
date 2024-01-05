#ifndef PIECE_H
#define PIECE_H

using namespace std;
#include "PieceType.hpp"

class Piece
{
    PieceType type;

public:
    Piece(PieceType type);
    PieceType getType();
    void setType(PieceType type);
};

#endif