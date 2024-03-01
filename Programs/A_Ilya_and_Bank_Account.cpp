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

int delLast(int n) {
  return n/10;
}

int delSecondLast(int n) {
  int lastDigit = n%10;
  n /= 10;
  n = n - n%10;
  return n+lastDigit;
}

void solve() {
  ll n;
  cin >> n;

  if (n>=0) {p(n); return;}

  if (n>=-10) {p(0); return;}

  int delLst = delLast(n);
  int delSecondLst = delSecondLast(n);

  p(max(delLst, delSecondLst));
}

int main() {
  int tests = 1;
  // cin >> tests;
  while (tests--) solve();
  return 0;
}
