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

void solve() {
  ll n, x, y;
  cin >> n >> x >> y;

  string f,s;
  cin >> f >> s;

  ll different = 0;
  vector<ll> diffs;

  for (int i=0; i<n; i++) {
    if (f[i] != s[i]) {
      different++;
      diffs.push_back(i);
    }
  }

  if (different&1) {
    p(-1); return;
  }

  if (different == 2) {
    if (diffs[0]+1 == diffs[1]) {
      ll ans = min(x, 2*y);
      p(ans);
    }
    else {
      p(y);
    }
    return;
  }

  // ll take = min(x, 2*y);

  ll total = different/2 * y;

  p(total);

  


}

int main() {
  cin.sync_with_stdio(0);
  cin.tie(0);
  int tests = 1;
  cin >> tests;
  while (tests--) solve();
  return 0;
}
