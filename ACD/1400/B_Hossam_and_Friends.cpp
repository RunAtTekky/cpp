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
  ll n,m;
  cin >> n >> m;
  
  vector<ll> first(n+1, n+1);

  for (int i=1; i<=m; i++) {
    ll a,b; cin >> a >> b;

    if (a>b) swap(a,b);
    first[a] = min(b,first[a]);
  }

  for (int i=n-1; i>=1 ; i--) {
    first[i] = min(first[i], first[i+1]);
  }

  ll ans = 0;
  for (int i=1; i<=n; i++) {
    ans += first[i]-i;
  }
  p(ans);

}

int main() {
  int tests = 1;
  cin >> tests;
  while (tests--) solve();
  return 0;
}
