#include <iostream>
#include <vector>
using namespace std;

char board[8][8];
bool col[8];           // 欄是否已有皇后
bool diag1[15];        // 主對角線 (row + col)
bool diag2[15];        // 副對角線 (row - col + 7)
int ways = 0;

void backtrack(int row) {
    if (row == 8) {
        ways++;
        return;
    }
    for (int c = 0; c < 8; c++) {
        if (board[row][c] == '.' && !col[c] && !diag1[row + c] && !diag2[row - c + 7]) {
            col[c] = diag1[row + c] = diag2[row - c + 7] = true;
            backtrack(row + 1);
            col[c] = diag1[row + c] = diag2[row - c + 7] = false;
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    for (int i = 0; i < 8; i++)
        for (int j = 0; j < 8; j++)
            cin >> board[i][j];

    backtrack(0);

    cout << ways << "\n";
    return 0;
}
