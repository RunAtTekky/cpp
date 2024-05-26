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
#define YES cout << "Yes" << "\n"
#define NO cout << "No" << "\n"

const int N = 1e5+5;
const int MOD = 1e9+7;

void solve() {
  ll n;
  cin >> n;
  
  vector<long long> vec(n);
  for (auto &e: vec) cin >> e;
  
  sort(vec.begin(), vec.end());

  if (vec[0] == 1) {YES; return;}

  int l = 0;
  int r = 1;

  for (int i=1; i<n; i++) {
    if (vec[i]%vec[l] != 0) {r = i; break;}
  }

  for (int i=2; i<n; i++) {
    if ((vec[i]%vec[l] != 0) && (vec[i]%vec[r] != 0)) {NO; return;}
  }

  YES;
}

int main() {
  cin.sync_with_stdio(0);
  cin.tie(0);
  int tests = 1;
  cin >> tests;
  while (tests--) solve();
  return 0;
}
