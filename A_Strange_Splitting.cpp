// RunAt - Green
#include <bits/stdc++.h>
using namespace std;

#define YES cout << "YES\n"
#define NO cout << "NO\n"

void solve() {
  int n; cin >> n;

  vector<int> a(n);
  for (auto &e : a) cin >> e;

  if (a[0] == a[n-1]) {NO; return;}

  YES;

  if (a[1] == a[n-1]) {
    cout << "RR";
    for (int i=0; i<n-2; i++) {
      cout << "B";
    }
  }
  else {
    cout << "R";
    for (int i=0; i<n-1; i++) {
      cout << "B";
    }
  }
  cout << "\n";


}

int main() {
  cin.sync_with_stdio(0);
  cin.tie(0);

  int t; cin >> t;
  while (t--) solve();
  
}