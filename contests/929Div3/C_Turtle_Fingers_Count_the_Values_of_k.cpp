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
  int a,b,l;
  cin >> a >> b >> l;

  if (a > b) swap(a,b);

  ll temp = l;

  ll aC = 0;
  while (temp>0 && temp%a == 0) {
    aC++;
    temp /= a;
  }

  temp = l;
  ll bC = 0;
  while (temp>0 && temp%b == 0) {
    bC++;
    temp /= b;
  }

  ll ans = 0;
  set<ll> st;

  for (int aPow = 0; aPow <= aC; aPow++) {
    for (int bPow = 0; bPow <= bC; bPow++) {
      ll aM = pow(a,aPow);
      ll bM = pow(b,bPow);

      if (l%(aM*bM) == 0) {
        st.insert(l/(aM*bM));
      }

    }
  }
  p(st.size());
  
}

int main() {
  cin.sync_with_stdio(0);
  cin.tie(0);
  int tests = 1;
  cin >> tests;
  while (tests--) solve();
  return 0;
}
