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
  ll n,k;
  cin >> n >> k;

  vector<long long> vec(n);
  for (auto &e: vec) cin >> e;
  
  vector<ll> notGood;
  for (int i=1; i<n; i++) {
    if (vec[i]*2 <= vec[i-1]) {
      notGood.push_back(i);
    }
  }

  ll ans = 0;
  for (int i=0; i+k<n; i++) {
    auto it = upper_bound(notGood.begin(), notGood.end(), i);
    if (it == notGood.end()) {ans++; continue;}
    if ((*it) > i+k) {
      ans++;
    }
  }
  p(ans);

}

int main() {
  int tests = 1;
  cin >> tests;
  while (tests--) solve();
  return 0;
}
