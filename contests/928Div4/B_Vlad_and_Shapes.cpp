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

  bool flag = false;
  for (int i=0; i<n; i++) {
    string s; cin >> s;
    for (int j=1; j+1<n; j++) {
      if (s[j] == '1') {
        if (s[j-1] == '0' && s[j+1] == '0') {
          p("TRIANGLE");
          flag = true;
        }
      }
    }
  }
  if (!flag) {
    p("SQUARE");
  }
}

int main() {
  int tests = 1;
  cin >> tests;
  while (tests--) solve();
  return 0;
}
