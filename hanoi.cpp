#include <iostream>
#include <vector>
using namespace std;

void hanoi(int n, int src, int aux, int dst, vector<pair<int,int>> &moves) {
    if (n == 0) return;
    hanoi(n - 1, src, dst, aux, moves);     // 將 n-1 個盤子從 src 移到 aux
    moves.push_back({src, dst});            // 移動最大的盤子 src → dst
    hanoi(n - 1, aux, src, dst, moves);     // 將 n-1 個盤子從 aux 移到 dst
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<pair<int,int>> moves;
    hanoi(n, 1, 2, 3, moves);

    cout << moves.size() << '\n';
    for (auto [a, b] : moves)
        cout << a << ' ' << b << '\n';
    return 0;
}
