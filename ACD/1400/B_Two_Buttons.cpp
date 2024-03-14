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
  ll n,m;
  cin >> n >> m;
  
  int count = 0;
  while (n != m) {
    if (m<n || m&1) {
      m++;
    }
    else {
      m /= 2;
    }
    count++;
  }
  p(count);
}

int main() {
  cin.sync_with_stdio(0);
  cin.tie(0);
  int tests = 1;
  // cin >> tests;
  while (tests--) solve();
  return 0;
}
