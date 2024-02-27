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
#define YES cout << "YES" << "\n"
#define NO cout << "NO" << "\n"

const int N = 1e5+5;
const int MOD = 1e9+7;

void solve() {
  ll n;
  cin >> n;
  
  vector<long long> vec(n);
  for (auto &e: vec) cin >> e;
  
  sort(vec.begin(), vec.end());

  ll countOfOne = count(vec.begin(), vec.end(), 1);
  if (countOfOne >= 2) {
    NO; return;
  }
  if (countOfOne == 1) {
    YES; return;
  }

  if (vec[0] != vec[1]) {
    YES;
  }
  else {
    for (int i=0; i<n; i++) {
      if (vec[i]%vec[0] != 0) {
        YES;
        return;
      }
    }
    NO;
  }

}

int main() {
  cin.sync_with_stdio(0);
  cin.tie(0);
  int tests = 1;
  cin >> tests;
  while (tests--) solve();
  return 0;
}
