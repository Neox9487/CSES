#include <iostream>
#include <string>
#include <vector>

using namespace std;

string s;
vector<bool> used;
string path;
vector<string> results;

void _sort() {
    int n = s.size();
    for (int i = 0; i < n-1; i++) {
        int min_idx = i;
        for (int j = i+1; j < n; j++) {
            if (s[j] < s[min_idx]) min_idx = j;
        }
        swap(s[i], s[min_idx]);
    }
}

void dfs() {
    if (path.size() == s.size()) {
        results.push_back(path);
        return;
    }
    for (int i = 0; i < s.size(); i++) {
        if (used[i]) continue;
        if (i > 0 && s[i] == s[i-1] && !used[i-1]) continue;

        used[i] = true;
        path.push_back(s[i]);
        dfs();
        path.pop_back();
        used[i] = false;
    }
}

int main() {
    cin >> s;
    _sort();
    used.assign(s.size(), false);
    dfs();

    cout << results.size() << "\n";
    for (auto &str : results) {
        cout << str << "\n";
    }
    return 0;
}