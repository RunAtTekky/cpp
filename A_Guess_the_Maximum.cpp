// RunAt - Green
#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n; cin >> n;
  vector<int> a(n); for (auto &e: a) cin >> e;

  int k = INT_MAX;
  for (int i=0; i<n; i++) {
    int maxi = a[i];
    for (int j=i+1; j<n; j++) {
      maxi = max(maxi, a[j]);
      k = min(maxi-1,k);
    }
  }

  cout << k << "\n";

}

int main() {
  cin.sync_with_stdio(0); cin.tie(0);
  int t; cin >> t; while (t--) solve();
}