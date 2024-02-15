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
#define YES cout << "Yes" << "\n"
#define NO cout << "No" << "\n"

const int N = 1e5+5;
const int MOD = 1e9+7;

void solve() {
  ll a,b;
  cin >> a >> b;

  if (a%2 != 0 && b%2 != 0) {
    NO;
    return;
  }
  if (a%2 == 0 && b%2 == 0) {
    YES; return;
  }
  if (b%2 == 0) {
    swap(a,b);
  }
  if (a/2 == b && 2*b == a) {NO; return;}
  YES;


}

int main() {
  int tests = 1;
  cin >> tests;
  while (tests--) solve();
  return 0;
}
