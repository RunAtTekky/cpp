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

  ll q;
  cin >> q;

  vector<long long> vec(n);
  for (auto &e: vec) cin >> e;
  
  while (q--) {
    int l,r;
    cin >> l >> r;

    map<ll,ll> mp;
    bool found = false;
    for (int i=l-1; i<=r-1; i++) {
      mp[vec[i]]++;
      if (mp[vec[i]] > (r-l+1)/2) {
        NO; found = true;
      }
    }
    if (!found) {
      YES;
    }
  }
}

int main() {
  int tests = 1;
  cin >> tests;
  while (tests--) solve();
  return 0;
}
