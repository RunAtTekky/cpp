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

ll nxt (ll x) {
  return x + x%10;
}

void solve() {
  ll n;
  cin >> n;
  
  bool is5Present = false;
  vector<long long> vec(n);
  for (auto &e: vec) {
    cin >> e;
    // Check if %10 is 0 or 5.
    if (e%5 == 0) {
      is5Present = true;
      e = nxt(e);
    }
  }

  if (is5Present) {
    // As 5 or 0 cannot become %10 == 2
    // We check if max and min are equal
    if (*min_element(vec.begin(), vec.end()) == *max_element(vec.begin(), vec.end())) {
      YES;
    }
    else {NO;}
    return;
  }

  // 2,22,42....
  bool f = false;
  // 12,32,52....
  bool s = false;

  for (auto &x: vec) {
    ll e = x;
    while (e%10 != 2) {
      e = nxt(e);
    }

    if (e%20 == 2) f = true;
    else s = true;
  }

  // If we are getting both 12+20+20+.... and 2+20+20+...
  (f&s) ? NO : YES ;



  


}

int main() {
  cin.sync_with_stdio(0);
  cin.tie(0);
  int tests = 1;
  cin >> tests;
  while (tests--) solve();
  return 0;
}
