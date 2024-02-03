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
  string s;
  cin >> s;

  string ans = "";
  for (int i=s.size()-1; i>=0; i--) {
    if (s[i] == '.') break;
    else {
      ans += s[i];
    }
  }
  for (int i=ans.size()-1; i>=0; i--) {
    cout << ans[i];
  }
}

int main() {
  int tests = 1;
  // cin >> tests;
  while (tests--) solve();
  return 0;
}
