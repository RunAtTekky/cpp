// RunAt - Green
#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n; cin >> n;

  if (n&1) {cout << "NO\n"; return;}

  cout << "YES\n";
  for (int i=0; i<n; i++) {
    if (i%4 < 2) {
      cout << 'A';
    }
    else {
      cout << 'B';
    }
  }
  cout << "\n";

}

int main() {
  cin.sync_with_stdio(0); cin.tie(0);
  int t; cin >> t; while (t--) solve();
}