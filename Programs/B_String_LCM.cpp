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
  string s,t;
  cin >> s >> t;

  int n = s.size();
  int m = t.size();

  int lcm = (n*m) / (__gcd(n,m));

  string ans = "";
  string ans2 = "";
  for (int i=0; i<(lcm)/m; i++) {
    ans.append(t);
  }
  for (int i=0; i<(lcm)/n; i++) {
    ans2.append(s);
  }
  if (ans2 == ans) {p(ans);}
  else {p(-1);}
}

int main() {
  int tests = 1;
  cin >> tests;
  while (tests--) solve();
  return 0;
}
