/*
    RunAt - green
*/
#include <iostream>
#include <set>
#include <climits>
#include <cmath>
#include <numeric>
#include <map>
#include <string>
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
  ll n, q;
  cin >> n >> q;

  vector<long long> vec(n);
  for (auto &e: vec) cin >> e;

  sort(vec.begin(), vec.end());
  
  vector<ll> pref(n+1);

  partial_sum(vec.begin(), vec.end(), pref.begin()+1);

  while (q--) {
    int x,y; cin >> x >> y;

    ll ans = pref[n-x+y] - pref[n-x];

    p(ans);

  }
}

int main() {
  cin.sync_with_stdio(0);
  cin.tie(0);
  int tests = 1;
  // cin >> tests;
  while (tests--) solve();
  return 0;
}
