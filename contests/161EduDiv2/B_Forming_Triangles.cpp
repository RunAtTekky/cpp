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

void solve() {
  ll n;
  cin >> n;
  
  map<ll,ll> mp;
  for (int i=0; i<n; i++) {
    ll a; cin >> a;
    mp[a]++;
  }

  ll ans = 0;
  ll curr = 0;

  for (auto &[x,y] : mp) {
    if (y == 1) {curr++;}
    if (y == 2) {ans += curr; curr += 2;}
    if (y > 2) {
      ans += (y*(y-1)*(y-2))/6;

      ans += curr*y*((y-1))/2;
      curr += y;
    }
  }
  cout << ans << "\n";
  
}

int main() {
  int tests = 1;
  cin >> tests;
  while (tests--) solve();
  return 0;
}
