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
#define YES cout << "Yes" << "\n"
#define NO cout << "No" << "\n"

const int N = 1e5+5;
const int MOD = 1e9+7;

void solve() {
  ll n;
  cin >> n;
  vector<long long> vec(n);
  for (auto &e: vec) cin >> e;

  
  if (is_sorted(vec.begin(), vec.end())) {YES; return;}

  for (int i=0; i<n; i++) {
    vector<ll> newVec(n);
    for (int j=i; j<n; j++) {
      newVec.push_back(vec[j]);
    }
    for (int j=0; j<i; j++) {
      newVec.push_back(vec[j]);
    }
    if (is_sorted(newVec.begin(), newVec.end())) {YES; return;}

  }
  NO;
}

int main() {
  cin.sync_with_stdio(0);
  cin.tie(0);
  int tests = 1;
  cin >> tests;
  while (tests--) solve();
  return 0;
}
