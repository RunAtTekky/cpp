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
#define YES cout << "Yes" << "\n"
#define NO cout << "No" << "\n"

const int N = 1e5+5;
const int MOD = 1e9+7;

void solve() {
  string s; cin >> s;
  if (!isupper(s[0])) {NO; return;}
  for (int i=1; i<s.size(); i++) {
    if (isupper(s[i])) {NO; return;}
  }
  YES;
}

int main() {
  int tests = 1;
  // cin >> tests;
  while (tests--) solve();
  return 0;
}
