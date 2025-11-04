#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n; cin >> n;
    vector<int> weights(n);
    int sum = 0;
    for (int i = 0; i < n; i++) {
        cin >> weights[i];
        sum += weights[i];
    }

    int half = sum / 2;
    vector<bool> dp(half + 1, false);
    dp[0] = true;

    for (int w : weights) {
        for (int j = half; j >= w; j--) {
            dp[j] = dp[j] || dp[j - w];
        }
    }

    int best = 0;
    for (int j = half; j >= 0; j--) {
        if (dp[j]) {
            best = j;
            break;
        }
    }

    cout << sum - 2 * best << "\n";
}
