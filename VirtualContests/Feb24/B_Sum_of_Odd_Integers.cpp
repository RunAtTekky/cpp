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
  ll n,k;
  cin >> n >> k;

  if ((n&1) && k==1) {YES; return;}
  if (n<k) {NO; return;}
  if ((n&1) && !(k&1)) {NO; return;}
  if (!(n&1) && (k&1)) {NO; return;}

  
  if (n<(k*k)) {NO; return;}
  YES;


}

int main() {
  int tests = 1;
  cin >> tests;
  while (tests--) solve();
  return 0;
}
