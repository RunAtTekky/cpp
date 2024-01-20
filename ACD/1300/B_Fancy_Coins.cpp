/*
  RunAt - grey
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

ll m,k,a1,ak;

ll getExtraCoins(ll coinsTaken) {
  ll onesToUse = m-coinsTaken*k;
  return (max(0LL, onesToUse - a1) + max(0LL, coinsTaken - ak));
}

ll getMinCoins() {
  
  ll start = 0;
  ll end = m/k; // Maximum ak coins we have to take is floor(m/k)
  while (end-start > 2) {
    ll mid = (start+end)/2;

    if (getExtraCoins(mid) < getExtraCoins(mid+1)) {
      end = mid;
    }
    else {
      start = mid;
    }
  }
  ll res = INT_MAX;
  for (int i=start; i<=end; i++) {
    res = min(res, getExtraCoins(i));
  }
  return res;

}

void solve() {
  cin >> m >> k >> a1 >> ak;
  
  ll ans = getMinCoins();

  p(ans);
}

int main() {
  int tests = 1;
  cin >> tests;
  while (tests--) solve();
  return 0;
}
