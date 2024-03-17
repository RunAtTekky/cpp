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
  ll n,m;
  cin >> n >> m;

  ll days = 0;

  while (n>0) {
    n--;
    days++;
    if (days%m == 0) n++;
  }
  p(days);
}

int main() {
  cin.sync_with_stdio(0);
  cin.tie(0);
  int tests = 1;
  // cin >> tests;
  while (tests--) solve();
  return 0;
}
