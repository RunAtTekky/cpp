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
  ll n,t;
  cin >> n >> t;

  vector<long long> vec(n);
  for (auto &e: vec) cin >> e;
  
  vector<ll> pref(n+1);
  partial_sum(vec.begin(), vec.end(), pref.begin() + 1);

  ll maxi = 0;
  for (int i=0; i<n; i++) {
    ll target = pref[i]+t;
    auto lastBook = upper_bound(pref.begin()+i, pref.end(), target);
    ll booksRead = lastBook - pref.begin() - i - 1;
    maxi = max(maxi, booksRead);
  }
  p(maxi);
}

int main() {
  cin.sync_with_stdio(0);
  cin.tie(0);
  int tests = 1;
  // cin >> tests;
  while (tests--) solve();
  return 0;
}
