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
  ll n,x,y;
  cin >> n >> x >> y;

  vector<long long> vec(n);
  for (auto &e: vec) cin >> e;

  map<ll, ll> mp;
  map<ll, vector<ll>> mp2;

  ll cnt = 0;
  for (int i=0; i<n; i++) {
    ll req = x - (vec[i]%x);

    if (mp[req]) {
      auto v = mp2[vec[i]%y];
      if (binary_search(v.begin(), v.end(), mp[req])) {
        cnt++;
      }
    }

    mp[vec[i]%x] = i;
    mp2[vec[i]%y].push_back(i);

    if (vec[i]%x == 0) mp[vec[i]%x] = i;
    if (vec[i]%y == 0) mp2[vec[i]%y].push_back(i);
  }

  p(cnt);
  
}

int main() {
  int tests = 1;
  cin >> tests;
  while (tests--) solve();
  return 0;
}
