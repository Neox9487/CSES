#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int q;
    cin >> q;
    while (q--) {
        long long k;
        cin >> k;
        long long d = 1, count = 9, start = 1;
        
        while (k > d * count) {
            k -= d * count;
            d++;
            count *= 10;
            start *= 10;
        }

        long long num = start + (k - 1) / d;
        string s = to_string(num);
        cout << s[(k - 1) % d] << "\n";
    }
}
