#include <iostream>
#include <vector>
#include <deque>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin>>n;
    const vector<pair<int,int>> moves = {
        {2,1},{2,-1},{-2,1},{-2,-1},
        {1,2},{1,-2},{-1,2},{-1,-2}
    };

    vector<vector<int>> dist(n, vector<int>(n, -1));
    deque<pair<int,int>> q;

    dist[0][0] = 0;
    q.emplace_back(0,0);
    
    while (!q.empty()) {
        auto [r,c] = q.front(); q.pop_front();
        for (auto [dr,dc] : moves) {
            int nr = r + dr, nc = c + dc;
            if (nr >= 0 && nr < n && nc >= 0 && nc < n && dist[nr][nc] == -1) {
                dist[nr][nc] = dist[r][c] + 1;
                q.emplace_back(nr,nc);
            }
        }
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << dist[i][j] << (j+1==n ? '\n' : ' ');
        }
    }
    return 0;
}
