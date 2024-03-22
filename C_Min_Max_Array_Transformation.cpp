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
  
  vector<long long> vec2(n);
  for (auto &e: vec2) cin >> e;

  for (int i=0; i<n; i++) {
    int greater = *lower_bound(vec2.begin(), vec2.end(), vec[i]);

    cout << greater - vec[i] << " ";
  }
  cout << "\n";

  vector<int> suff(n);

  suff[n-1] = vec2[n-1];
  for (int i=n-2; i>=0; i--) {
    if (vec[i+1] <= vec2[i]) {
      suff[i] = suff[i+1];
    }
    else {
      suff[i] = vec2[i];
    }
  }

  for (int i=0; i<n; i++) {
    cout << suff[i]-vec[i] << " ";
  }
  cout << "\n";
  
}

int main() {
  cin.sync_with_stdio(0);
  cin.tie(0);
  int tests = 1;
  cin >> tests;
  while (tests--) solve();
  return 0;
}
