// RunAt - Green
#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n,m,k; cin >> n >> m >> k;

  string s; cin >> s;

  string river = "L";
  river += s;

  vector<int> swimDP(n+2);

  swimDP[n+1] = 0;

  for (int i=n; i>=0; i--) {

    if (river[i] == 'C') swimDP[i] = 1e8;

    if (river[i] == 'W') swimDP[i] = swimDP[i+1] + 1;

    if (river[i] == 'L') {
      int minimumSwims = 1e8;

      for (int jump=1; jump<=m; jump++) {
        if (i+jump >= n+2) break;
        minimumSwims = min(minimumSwims, swimDP[i+jump]);
      }

      swimDP[i] = minimumSwims;
    }
  }

  if (swimDP[0] >= 1e8 || swimDP[0] > k) {
    cout << "NO\n";
  } else {
    cout << "YES\n";
  }

}

int main() {
  cin.sync_with_stdio(0); cin.tie(0);
  int t; cin >> t; while (t--) solve();
}