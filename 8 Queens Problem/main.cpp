#include "Board.h"
#include <iostream>

using namespace std;

int main() {
    Board board;
    if (board.solveQueens(0)) {
        std::clog << "Solution found:\n";
        board.printBoard();
    } else {
        std::clog << "Solution not found\n";
    }
    return 0;
}
