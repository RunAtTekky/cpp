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

  auto sum = accumulate(vec.begin(), vec.end(), 0LL);

  ll wantedWater = sum/n;

  ll excess = 0;
  for (int i=0; i<n; i++) {
    if (vec[i] < wantedWater) {
      if (excess < wantedWater-vec[i]) {
        NO;
        return;
      }
      else {
        excess -= wantedWater - vec[i];
      }
    }
    else {
      excess += vec[i] - wantedWater;
    }
  }
  YES;


  

  
}

int main() {
  int tests = 1;
  cin >> tests;
  while (tests--) solve();
  return 0;
}
