#include <iostream>
#include <string>
#include <vector>

using namespace std;

string rearrange_string(const string& s) {
    int n = (int)s.size();
    vector<int> count(26, 0);
    for (char ch : s) {
        count[ch - 'A']++;
    }

    int max_count = 0;
    for (int c : count) {
        if (c > max_count) max_count = c;
    }
    if (max_count > (n + 1) / 2) return "-1";

    string result;
    int prev_char = -1;

    for (int i = 0; i < n; i++) {
        bool found = false;
        for (int c = 0; c < 26; c++) {
            if (count[c] == 0 || c == prev_char) continue;
            count[c]--;
            result.push_back('A' + c);
            prev_char = c;
            found = true;
            break;
        }
        if (!found) {
            return "-1";
        }
    }

    return result;
}

int main() {
    string s;
    cin >> s;
    cout << rearrange_string(s) << "\n";
    return 0;
}
