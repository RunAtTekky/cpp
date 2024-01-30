/*
    RunAt - grey
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

bool f(ll x, ll n, ll mid) {
  ll total = 0;
  for (int i=1; i<n; i++) {
    total += mid;
  }
  if (total >= x) return false;
  else if ((x-total)%mid == 0) return true;
  else return false;
}

ll bs(ll x, ll n) {
  ll s = 1, e = x;

  while (e-s > 2) {
    ll mid = (s+e)/2;

    if (f(x,n,mid)) {
      s = mid;
    }
    else {
      e = mid;
    }
  }
  ll res = 0;
  for (ll i=s; i<=e; i++) {
    if (f(x,n,i)) res = max(res,i);
  }
  return res;
}
int maxGCD(int N, int K) {
    int i = sqrt(N);
    int res = 1;
    while (i >= 1) {
        if (N % i == 0) {
            if (i >= K)
                res = max(res, N / i);
 
            if (N / i >= K)
                res = max(res, i);
        }
        i--;
    }
 
    return res;
}
void solve() {
  ll x, n;
  cin >> x >> n;

  ll ans = maxGCD(x,n);
  cout << ans << "\n";
}

int main() {
  int tests = 1;
  cin >> tests;
  while (tests--) solve();
  return 0;
}
