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
  ll a,b,r;
  cin >> a >> b >> r;

  if (a > b) swap(a,b);

  vector<ll> aBin;
  vector<ll> bBin;
  while (r > 0) {
    if ((a&1) == (b&1)) {
      aBin.push_back(a&1);
      bBin.push_back(b&1);
    }
    else {
      aBin.push_back(0);
      bBin.push_back(1);
    }
    r = r>>1;
    a = a>>1;
    b = b>>1;
  }
  ll aNow = 0;
  ll bNow = 0;

  for (int i=0; i<aBin.size(); i++) {
    aNow += (2<<i)*aBin[i];
  }
  for (int i=0; i<bBin.size(); i++) {
    bNow += (2<<i)*bBin[i];
  }

  p(abs(aNow-bNow));
}

int main() {
  int tests = 1;
  cin >> tests;
  while (tests--) solve();
  return 0;
}
