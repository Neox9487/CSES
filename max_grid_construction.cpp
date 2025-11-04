#include <iostream>
#include <vector>
#include <set>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;
    vector<vector<int>> grid(n, vector<int>(n, 0));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            set<int> used;

            for (int k = 0; k < j; k++)
                used.insert(grid[i][k]);

            for (int k = 0; k < i; k++)
                used.insert(grid[k][j]);

            int x = 0;
            while (used.count(x)) x++;
            grid[i][j] = x;
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            cout << grid[i][j] << " ";
        cout << "\n";
    }
}
