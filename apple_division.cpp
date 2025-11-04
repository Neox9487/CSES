#include <iostream>
#include <vector>
#include <cmath>
#include <climits>
using namespace std;

int main() {
    int n; cin >> n;
    vector<long long> weights(n);
    long long total_sum = 0;
    for (int i = 0; i < n; i++) {
        cin >> weights[i];
        total_sum += weights[i];
    }

    long long minimal = LLONG_MAX;

    for (int mask = 0; mask < (1 << n); mask++) {
        long long sum_sub = 0;
        for (int i = 0; i < n; i++) {
            if (mask & (1 << i)) {
                sum_sub += weights[i];
            }
        }
        long long diff = abs(total_sum - 2 * sum_sub);
        if (diff < minimal) {
            minimal = diff;
        }
    }

    cout << minimal << "\n";

    return 0;
}
