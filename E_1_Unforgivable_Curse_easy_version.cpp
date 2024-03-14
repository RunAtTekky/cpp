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

bool isSame(string s, string t) {
  sort(s.begin(), s.end());
  sort(t.begin(), t.end()); 

  return s==t;
}

void solve() {
  ll n,k;
  cin >> n >> k;

  string s,t;
  cin >> s >> t;


  if (!isSame(s,t)) {
    NO; return;
  }

  if (n>=6) {YES; return;}

  for (int i=0; i<n; i++) {
    if (i-k < 0 && i+k >= n && s[i] != t[i]) {
      NO; return;
    }
  }
  YES;



}

int main() {
  cin.sync_with_stdio(0);
  cin.tie(0);
  int tests = 1;
  cin >> tests;
  while (tests--) solve();
  return 0;
}
