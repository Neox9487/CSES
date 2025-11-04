#include <iostream>
#include <vector>

#define loop1(x, y) for(int i=x; i<y; i++)
#define loop2(x, y) for(int j=x; j<y; j++)

using namespace std;

int main() {
    int n; cin>>n;
    vector<vector<int>> grid(n, vector<int>(n, 0));
    loop1(0, n) loop2(0, n) grid[i][j] = (i+j) % n;
    loop1(0, n) {
        loop2(0, n) cout<<grid[i][j]<<" ";
        cout<<"\n";
    }
}