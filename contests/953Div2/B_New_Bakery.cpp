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
  ll n,a,b;
  cin >> n >> a >> b;

  if (a >= b) {
    p(n*a);
    return;
  }

  ll upper = b;
  ll lower = a-1;

  ll k = b+1-a;
  ll total = 0;

  if (k > n) {
    lower = b-n;
    k=n;
  }

  total += upper*(upper+1)/2;
  total -= lower*(lower+1)/2;

  total += (n-k)*a;

  p(total);

}

int main() {
  cin.sync_with_stdio(0);
  cin.tie(0);
  int tests = 1;
  cin >> tests;
  while (tests--) solve();
  return 0;
}
