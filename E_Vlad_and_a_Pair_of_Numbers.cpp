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
  int ogC;
  cin >> ogC;

  vector<int> multipliers;

  int c = ogC;
  int pos = 1;
  while (c>0) {
    if (c%2 == 0) multipliers.push_back(pos);
    pos = pos<<1;
    c = c>>1;
  }

  reverse(multipliers.begin(), multipliers.end());

  c = ogC;
  int a = c;
  int b = 0;
  for (auto multiplier : multipliers) {
    if (c/multiplier >= 1) {b += multiplier; a+= multiplier;}
    c = c - (c/multiplier)*multiplier;
  }

  if (c == 0 && (a+b == 2*ogC)) {
    p2(a,b);
  }
  else {
    p(-1);
  }

}

int main() {
  cin.sync_with_stdio(0);
  cin.tie(0);
  int tests = 1;
  cin >> tests;
  while (tests--) solve();
  return 0;
}
