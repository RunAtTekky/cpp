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

  vector<long long> vec(n);
  for (auto &e: vec) cin >> e;
  
  map<ll,ll> mp;

  ll sum = 0;
  for (int i=0; i<n; i++) {
    vec[i] = vec[i]%3;
    sum += vec[i];
    mp[vec[i]] = 1;
  }

  sum = sum%3;

  if (sum == 0) {
    p(0); return;
  }

  ll toIncrease = 3 - sum;
  // p(toIncrease);
  ll toDecrease = sum;

  if (mp[toDecrease]) {
    p(1); return;
  }
  else {
    p(toIncrease);
  }


}

int main() {
  int tests = 1;
  cin >> tests;
  while (tests--) solve();
  return 0;
}
