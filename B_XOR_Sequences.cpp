// RunAt - Green
#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
  ll x,y; cin >> x >> y;

  ll maxConsecutives = 0;
  while (x>0 && y>0) {
    if ((x&1)^(y&1)) {
      cout << (1<<maxConsecutives) << "\n";
      return;
    }
    maxConsecutives++;
    x >>= 1; y >>=1;
  }
  // 10010110111100101010111010001
  // 00000110111100101010111010001

  // 1100
  // 0100

  // 111001
  // 100101


  while (x>0) {
    if ((x&1) == 0) {
      maxConsecutives++;
      x >>= 1;
    }
    else break;
  }
  while (y>0) {
    if ((y&1) == 0) {
      maxConsecutives++;
      y >>= 1;
    }
    else break;
  }
  cout << (1<<maxConsecutives) << "\n";

}

int main() {
  cin.sync_with_stdio(0); cin.tie(0);
  int t; cin >> t; while (t--) solve();
}