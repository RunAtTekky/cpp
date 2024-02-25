/*
  RunAt - green
*/
#include <iostream>
#include <set>
#include <climits>
#include <string>
#include <numeric>
#include <cmath>
#include <map>
#include <algorithm>
#include <vector>
using namespace std;

typedef int long long ll;
#define p(a) cout << a << "\n";
#define p2(a,b) cout << a << " " << b << "\n";
#define YES cout << "YES" << "\n"
#define NO cout << "NO" << "\n"

const int N = 1e5+5;
const int MOD = 1e9+7;

ll sqroot(ll x) {
  ll s = 0, e = LONG_MAX;

  while (s<e) {
    ll m = (s+e)/2;
    if (m*m > x) e = m;
    else s = m+1;
  }
  return s-1;
}

void solve() {
  ll l,r;
  cin >> l >> r;

  ll sqL = sqrt(l);
  ll sqR = sqrt(r);

  // p2(sqL,sqR);

  ll ans = 0;
  if (sqL == sqR) {
    for (int i=0; i<3; i++) {
      if (l <= sqL*(sqL+i) && sqL*(sqL+i) <= r) ans++;
    }
  }
  else {
    ans = sqR - sqL - 1;
    ans *= 3;

    for (int i=0; i<3; i++) {
      if (l <= sqL*(sqL+i) && sqL*(sqL+i) <= r) ans++;
      if (l <= sqR*(sqR+i) && sqR*(sqR+i) <= r) ans++;
    }
  }

  p(ans);

  
}

int main() {
  cin.sync_with_stdio(0);
  cin.tie(0);
  int tests = 1;
  cin >> tests;
  while (tests--) solve();
  return 0;
}
