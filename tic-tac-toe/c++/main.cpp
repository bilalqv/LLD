#include <bits/stdc++.h>
#include "Game.hpp"
#include "Player.hpp"
#include "Board.hpp"
#include "Piece.hpp"
#include "PieceType.hpp"

using namespace std;

int main()
{
    cout << "Hello World!" << endl;

    Piece X(PieceType::X);
    Piece O(PieceType::O);
    Player A(X, "A");
    Player B(O, "B");
    Board board = Board(3);

    Game game = Game(A, B, board);

    game.startGame();

    return 0;
}