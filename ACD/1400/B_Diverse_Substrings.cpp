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
  ll n;
  cin >> n;

  string s;
  cin >> s;

  ll total = 0;
  for (int i=0; i<n; i++) {
    vector<ll> distinct(10);
    ll maxi = 0;
    ll dist = 0;
    // Iterate till any one element's frequency exceeds 10.
    // In that case, we can only have 10 distinct elements
    // Thus, it is not possible to continue further.
    for (int j=i; j<n && (++distinct[s[j]-'0']) <= 10; j++) {
      if (distinct[s[j]-'0'] == 1) dist++;
      maxi = max(maxi,distinct[s[j]-'0']);
      if (dist>=maxi) total++;
    }
  }
  p(total);
}

int main() {
  int tests = 1;
  cin >> tests;
  while (tests--) solve();
  return 0;
}
