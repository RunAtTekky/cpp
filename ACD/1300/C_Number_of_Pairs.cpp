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
  ll n, l, r;
  cin >> n >> l >> r;
  
  vector<long long> vec(n);
  for (auto &e: vec) cin >> e;
  
  sort(vec.begin(), vec.end());

  ll ans = 0;
  for (int i=0; i<n; i++) {
    ans += upper_bound(vec.begin(), vec.end(), r-vec[i]) - lower_bound(vec.begin(), vec.end(), l-vec[i]);

    if (l <= vec[i]*2 && vec[i]*2 <= r) {
      ans--;
    }
  }
  p(ans/2);
}

int main() {
  int tests = 1;
  cin >> tests;
  while (tests--) solve();
  return 0;
}
