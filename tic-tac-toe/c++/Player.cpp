#include <string>
#include "Player.hpp"
using namespace std;

Player::Player(Piece piece, string name) : piece(piece), name(name)
{
}

Piece Player::getPiece()
{
    return piece;
}

void Player::setPiece(Piece piece)
{
    this->piece = piece;
}

string Player::getName()
{
    return name;
}

void Player::setName(string name)
{
    this->name = name;
}
