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
  ll a,b,r;
  cin >> a >> b >> r;
  
  if (a > b) swap(a,b);

  bool highBitOff = false;
  ll currValue = 0;

  for (int i=63; i>=0; i--) {
    ll currA = (a>>i)&1;
    ll currB = (b>>i)&1;

    if (currA != currB) {
      if (!highBitOff) highBitOff = true;
      else {
        if (currB == 1 && currValue + (1ll<<i) <= r) {
          currValue += (1ll<<i);
          a = a^(1ll<<i);
          b = b^(1ll<<i);
        }
      }
    }
  }
  p(abs(b-a));
}

int main() {
  int tests = 1;
  cin >> tests;
  while (tests--) solve();
  return 0;
}
