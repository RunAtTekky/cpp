// RunAt - Green
#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n,m; cin >> n >> m;

  vector<vector<char>> grid(n);
  for (int i=0; i<n; i++) {
    vector<char> row(m);
    for (auto &ch: row) cin >> ch;
    grid[i] = row;
  }

  int rowWithMaxConsecutiveHash = 0;
  int colWithMaxConsecutiveHash = 0;

  int maxHash = 0;
  for (int i=0; i<n; i++) {
    int hashes = 0;
    for (int j=0; j<m; j++) {
      hashes += (grid[i][j]=='#');
    }
    if (hashes > maxHash) {
      maxHash = hashes;
      rowWithMaxConsecutiveHash = i;
    }
  }

  maxHash = 0;
  for (int j=0; j<m; j++) {
    int hashes = 0;
    for (int i=0; i<n; i++) {
      hashes += (grid[i][j]=='#');
    }
    if (hashes > maxHash) {
      maxHash = hashes;
      colWithMaxConsecutiveHash = j;
    }
  }

  cout << rowWithMaxConsecutiveHash + 1 << " " << colWithMaxConsecutiveHash + 1 << "\n";

}

int main() {
  cin.sync_with_stdio(0);
  cin.tie(0);
  int t; cin >> t;
  while (t--) solve();
  
}