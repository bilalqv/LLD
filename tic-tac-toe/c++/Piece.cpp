#include <iostream>
#include "Piece.hpp"
#include "PieceType.hpp"
using namespace std;

Piece::Piece(PieceType type)
{
    this->type = type;
}

PieceType Piece::getType()
{
    return type;
}

void Piece::setType(PieceType type)
{
    this->type = type;
}
