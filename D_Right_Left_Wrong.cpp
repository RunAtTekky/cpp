// RunAt - Green
#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n; cin >> n;

  vector<int> cells(n);
  for (auto &cell : cells) cin >> cell;

  string st; cin >> st;


  vector<long long> prefix(n+1);

  for (int i=0; i<n; i++) {
    prefix[i+1] = prefix[i] + cells[i];
  }

  long long sum = 0;

  int s=0, e=n-1;
  while (s<e) {

    while (s<n && st[s] != 'L') s++;
    while (e>=0 && st[e] != 'R') e--;
    if (s>e) {cout << sum << "\n"; return;}

    sum += prefix[e+1] - prefix[s];
    s++; e--;
  }

  cout << sum << "\n";

}

int main() {
  cin.sync_with_stdio(0); cin.tie(0);
  int t; cin >> t; while (t--) solve();
}