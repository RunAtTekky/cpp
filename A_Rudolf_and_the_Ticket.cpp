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
  ll n, m, k;
  cin >> n >> m >> k;

  vector<long long> vec(n);
  for (auto &e: vec) cin >> e;
  
  vector<long long> vec2(m);
  for (auto &e: vec2) cin >> e;

  sort(vec.begin(), vec.end());
  sort(vec2.begin(), vec2.end());

  ll total = 0;

  for (int i=0; i<n; i++) {
    for (int j=0; j<m; j++) {
      if (vec[i] + vec2[j] <= k) {
        total++;
      }
    }
  }
  
  p(total);
  
}

int main() {
  cin.sync_with_stdio(0);
  cin.tie(0);
  int tests = 1;
  cin >> tests;
  while (tests--) solve();
  return 0;
}
