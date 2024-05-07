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
  ll n, c, d;
  cin >> n >> c >> d;

  vector<ll> vec(n*n);
  for (auto &e : vec) cin >> e;

  sort(vec.begin(), vec.end());

  vector<ll> createdVec;

  ll curr = vec[0];
  for (int i=0; i<n; i++) {
    ll num = curr;
    for (int j=0; j<n; j++) {
      createdVec.push_back(num);
      num += c;
    }
    curr += d;
  }

  sort(createdVec.begin(), createdVec.end());

  auto isEqual = [n,vec,createdVec]() {
    for (int i=0; i<n*n; i++) {
      if (vec[i] != createdVec[i]) return false;
    }
    return true;
  };

  isEqual() ? YES : NO;
}

int main() {
  cin.sync_with_stdio(0);
  cin.tie(0);
  int tests = 1;
  cin >> tests;
  while (tests--) solve();
  return 0;
}
