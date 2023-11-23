/*
    RunAt - grey
*/
#include <iostream>
#include <string>
#include <vector>
using namespace std;

#define printnl(a) cout << a << "\n";

void solve() {
    int n,m;
    cin >> n >> m;


    int grid[501][501];

    int totalOnes = 0;
    for (int i=0; i<n; i++) {
        string line; cin >> line;
        for (int j=0; j<m; j++) {
            int cell = line[j]-'0';
            grid[i][j] = cell;
            totalOnes += cell;
        }
    }

    /*
        If all the entries are 1.
        Then one first move we will use 3 ones.
        And rest can be done in (totalOnes-3).
        Adding the first move as well we get.
        totalOnes - 2 
    */
    if (totalOnes == n*m) {
        printnl(totalOnes - 2);
        return;
    }

    // Check for consecutive two's
    // If two consecutive then on first move we only take
    // 1 one and rest can be totalOnes-1.
    // Adding the first move we get
    // totalOnes
    int verticalDir[3] = {-1,0,1};
    int horizontalDir[3] = {-1,0,1};

    vector<pair<int,int>> dir;
    for (auto &v : verticalDir) {
        for (auto &h : horizontalDir) {
            dir.push_back({v,h});
        }
    }

    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            if (grid[i][j] != 0) continue;
            for (auto [v,h] : dir) {
                int vPos = i+v;
                int hPos = j+h; 
                if (hPos < 0 || hPos>=m || vPos<0 || vPos>=n) continue;
                if (hPos == j && vPos == i) continue;

                if (grid[vPos][hPos] == 0) {
                    printnl(totalOnes);
                    return;
                }
            }
        }
    }
    
    // In case there are no consecutive zeroes,
    // but all entries are not one.
    // This implies, there is atleast one zero.
    // Starting from that we will use 2 ones in first move.
    // Then rest can be done in totalOnes-2.
    // Adding them all we get
    // totalOnes-1
    printnl(totalOnes-1);

}


int main() {
    int tests = 1;
    cin >> tests;
    while (tests--) solve();
    return 0;
}