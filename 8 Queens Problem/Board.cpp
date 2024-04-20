#include "Board.h"
#include "Queen.h"
#include <iostream>

Board::Board() {
    for (int i = 0; i < 8; ++i) {
        for (int j = 0; j < 8; ++j) {
            grid[i][j] = '-';
        }
    }
}

void Board::printBoard() {
    for (int i = 0; i < 8; ++i) {
        for (int j = 0; j < 8; ++j) {
            std::cout << grid[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

bool Board::isSafe(int row, int col) {
    for (int i = 0; i < col; i++)
        if (grid[row][i] == 'Q')
            return false;

    for (int i = row, j = col; i >= 0 && j >= 0; i--, j--)
        if (grid[i][j] == 'Q')
            return false;

    for (int i = row, j = col; j >= 0 && i < 8; i++, j--)
        if (grid[i][j] == 'Q')
            return false;

    return true;
}

bool Board::solveQueens(int col) {
    if (col >= 8)
        return true;

    for (int i = 0; i < 8; i++) {
        if (isSafe(i, col)) {
            grid[i][col] = 'Q';
            if (solveQueens(col + 1))
                return true;
            grid[i][col] = '-'; 
        }
    }

    return false;
}
