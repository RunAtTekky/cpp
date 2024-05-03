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
  ll n,k;
  cin >> n >> k;

  string s; cin >> s;

  int first = n, last = -1;

  int oneCnt = 0;
  for (int i=0; i<n; i++) {
    if (s[i] != '1') continue;
    oneCnt++;
    if (first == n) first = i;
    last = i;
  }

  ll add = 0;

  if (oneCnt && (n-1-last) <= k) {
    k -= n-1-last;
    oneCnt--;
    add++;
  }
  if (oneCnt && first<=k) {
    k -= first;
    oneCnt--;
    add += 10;
  }

  ll total = 11*oneCnt + add;

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
