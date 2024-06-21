// RunAt - Green
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define YES cout << "YES\n"
#define NO cout << "NO\n"

void solve() {
  ll x; cin >> x;

  ll carry = 0;

  while (x > 0) {
    int dig = x%10;

    if (dig == 9 && !carry) {
      NO; return;
    }

    if (dig == 0 && carry) {
      NO; return;
    }

    if ((x/10) == 0 && dig != 1) {
      NO; return;
    }

    carry = 1;
    x /= 10;
  }
  YES;


}

int main() {
  cin.sync_with_stdio(0);
  cin.tie(0);

  int t; cin >> t;
  while (t--) solve();
  
}