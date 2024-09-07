// RunAt - Green
#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
  int n,m,k; cin >> n >> m >> k;

  int w; cin >> w;

  vector<int> height(w);
  for (auto &h : height) cin >> h;

  sort(height.begin(), height.end(), greater<int>());

  vector<vector<int>> grid(n, vector<int>(m));

  for (int i=0; i<n; i++) {
    for (int j=0; j<m; j++) {
      // Formula

      int lowerBoundRow = max(0LL, i-k+1);
      int upperBoundRow = min(n-k, i);

      int lowerBoundCol = max(0LL, j-k+1);
      int upperBoundCol = min(m-k, j);

      int spotlight = (upperBoundRow-lowerBoundRow+1) * (upperBoundCol-lowerBoundCol+1);

      grid[i][j] = spotlight;
    }
  }

  vector<int> maximumSpotlight;
  for (int i=0; i<n; i++) {
    for (int j=0; j<m; j++) {
      // cout << grid[i][j] << " \n"[j==m-1];
      maximumSpotlight.push_back(grid[i][j]);
    }
  }

  sort(maximumSpotlight.begin(), maximumSpotlight.end(), greater<int>());

  int total = 0;

  for (int i=0; i<w; i++) {
    total += maximumSpotlight[i]*height[i];
  }

  cout << total << "\n";
}

int32_t main() {
  cin.sync_with_stdio(0); cin.tie(0);
  int t; cin >> t; while (t--) solve();
}