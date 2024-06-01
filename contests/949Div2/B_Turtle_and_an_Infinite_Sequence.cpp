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

  if (m==0) {p(n); return;}
  
  ll ans = n | (n-m>0)*(n-m) | (n+m) | (n-m>0)*(n-1) | (n+1);

  ll ahead = 1;
  while (ahead <= m) {
    ans |= n+ahead;
    ahead *= 2;
  }
  ll behind = 1;
  while (behind <= m && n-behind>0) {
    ans |= n-behind;
    behind *= 2;
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
