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
  ll n, k;
  cin >> n >> k;

  vector<long long> vec(n);
  for (auto &e: vec) cin >> e;
  
  int s=0, e=n-1;
  ll boats = 0;

  while (s<e) {
    ll mini = min(vec[s],vec[e]);
    if (k-2*mini>=0) {
      vec[s] -= mini;
      vec[e] -= mini;
      if (vec[s] == 0) {boats++; s++;}
      if (vec[e] == 0) {boats++; e--;}
      k -= 2*mini;
    }
    else {
      vec[s] -= k/2;
      vec[e] -= k/2;
      vec[s] -= k%2;
      if (vec[s] == 0) boats++;  
      if (vec[e] == 0) boats++;
      break;
    }
    if (k==0) break;
  }

  if (s==e && vec[s] != 0) {
    if (vec[s]-k <= 0) boats++;
  }
  p(boats);
}

int main() {
  cin.sync_with_stdio(0);
  cin.tie(0);
  int tests = 1;
  cin >> tests;
  while (tests--) solve();
  return 0;
}
