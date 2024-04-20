
class Board {
private:
    char grid[8][8];
public:
    Board();
    void printBoard();
    bool isSafe(int row, int col);
    bool solveQueens(int col);
};
