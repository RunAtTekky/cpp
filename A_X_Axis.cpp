// RunAt - Green
#include <bits/stdc++.h>
using namespace std;

void solve() {
  int a,b,c; cin >> a >> b >> c;

  int minDiff = 20;
  for (int x=0; x<=10; x++) {
    int diff = abs(x-a) + abs(x-b) + abs(x-c);
    minDiff = min(minDiff, diff);
  }

  cout << minDiff << "\n";

}

int main() {
  cin.sync_with_stdio(0); cin.tie(0);
  int t; cin >> t; while (t--) solve();
}