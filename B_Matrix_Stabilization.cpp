// RunAt - Green
#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n,m; cin >> n >> m;

  vector<vector<int>> grid(n);
  for (int i=0; i<n; i++) {
    vector<int> row;
    for (int j=0; j<m; j++) {
      int cell; cin >> cell;
      row.push_back(cell);
    }
    grid[i] = row;
  }

  for (int i=0; i<n; i++) {
    for (int j=0; j<m; j++) {

      int up,down,left,right;
      if (i==0) up = 0;
      else up = grid[i-1][j];
      if (i==n-1) down = 0;
      else down = grid[i+1][j];
      if (j==0) left = 0;
      else left = grid[i][j-1];
      if (j==m-1) right = 0;
      else right = grid[i][j+1];

      if (grid[i][j] > max({up,down,left,right})) {
        grid[i][j] = max({up,down,left,right});
      }
    }
  }

  for (int i=0; i<n; i++) {
    for (int j=0; j<m; j++) {
      cout << grid[i][j] << " \n"[j==m-1];
    }
  }

}

int main() {
  cin.sync_with_stdio(0); cin.tie(0);
  int t; cin >> t; while (t--) solve();
}