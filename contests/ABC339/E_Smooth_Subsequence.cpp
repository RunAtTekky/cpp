/*
    RunAt - green
*/
#include <iostream>
#include <set>
#include <queue>
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
  ll n,d;
  cin >> n >> d;

  vector<long long> vec(n);
  for (auto &e: vec) cin >> e;

  map<ll,ll> mp;

  ll ans = 0;

  for (int i=n-1; i>=0; i--) {
    ll prevVal = 0;
    auto it = mp.lower_bound(vec[i]+d);
    auto it2 = mp.lower_bound(vec[i]-d);

    if (it != mp.end()) {
      prevVal = (*it).second;
    }

    if (it2 != mp.end()) {

      prevVal = max(prevVal,(*it2).second);
    }


    mp[vec[i]] = prevVal + 1;
    ans = max(ans, prevVal+1);
  }
  p(ans);

  
  
}

int main() {
  int tests = 1;
  // cin >> tests;
  while (tests--) solve();
  return 0;
}
