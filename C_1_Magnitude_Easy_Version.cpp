// RunAt - Green
#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
  ll n; cin >> n;
  vector<ll> a(n); for (auto &e: a) cin >> e;

  ll maxNegative = 0, sum = 0;
  for (auto &num : a) {
    sum += num;
    maxNegative = min(maxNegative, sum);
  }

  /*
   When sum is the most negative
   at that moment we must make choose option 2
  */

  ll ans = sum - 2*maxNegative;

  cout << ans << "\n";

}

int main() {
  cin.sync_with_stdio(0);
  cin.tie(0);

  int t; cin >> t;
  while (t--) solve();
  
}