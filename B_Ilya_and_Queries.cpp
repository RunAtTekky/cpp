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
  string s; cin >> s;
  ll n = s.size();
  ll m;
  cin >> m;

  vector<int> vec(n+1);

  int same = 0;
  for (int i=0; i+1<n; i++) {
    if (s[i] == s[i+1]) {
      same++;
    }
    vec[i+1] = same;
  }
  vec[n] = same;

  // for (auto &e: vec) cout << e << " ";
  // cout << "\n";
  

  for (int i=0; i<m; i++) {
    int l, r;
    cin >> l >> r;

    // p2(l,r);

    int ans = vec[r-1] - vec[l-1];
    p(ans);
  }
  
}

int main() {
  int tests = 1;
  // cin >> tests;
  while (tests--) solve();
  return 0;
}
