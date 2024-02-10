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
  ll a,b;
  cin >> a >> b;

  ll total = a;
  ll rem = 0;

  while (a >= b) {
    total += a/b;
    rem = a%b;
    a /= b;
    a += rem;
  }

  
  p(total);
}

int main() {
  int tests = 1;
  // cin >> tests;
  while (tests--) solve();
  return 0;
}
