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

ll k,x,a;
ll ogA;

bool f(ll n, ll k, ll x) {
  if (n > ogA) return true;
  if (n <= 0) return false;
  if (x == 0 && n>0) return true;
  return f(n-1, k, x-1) && f(n-1+k, k, x);
}

void solve() {
  cin >> k >> x >> a;
  if (a-1 == 0) {NO; return;}
  if ((a-x*2)*2 > a) {YES; return;}
  if (k > x) {
    YES;
  }
  else {
    NO;
  }
}

int main() {
  int tests = 1;
  cin >> tests;
  while (tests--) solve();
  return 0;
}
