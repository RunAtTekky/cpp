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
  ll n;
  cin >> n;

  string s; cin >> s;

  ll cnt = 0;
  for (int i=0; i+3<=n; i++) {
    if (s.substr(i,3) == "map" || s.substr(i,3) == "pie") {
      cnt++;
    }
  }
  ll cnt2 = 0;
  for (int i=0; i+5<=n; i++) {
    if (s.substr(i,5) == "mapie") cnt2++;
  }

  p(cnt-cnt2);
}

int main() {
  cin.sync_with_stdio(0);
  cin.tie(0);
  int tests = 1;
  cin >> tests;
  while (tests--) solve();
  return 0;
}
