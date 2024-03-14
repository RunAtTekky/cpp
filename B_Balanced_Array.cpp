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

  if (n%4 != 0) {NO; return;}

  YES;
  
  ll first_half = 0;
  for (int i=1; i<=n/2; i++) {
    cout << i*2 << " ";
    first_half += i*2;
  }

  ll second_half = 0;
  for (int i=1; i<n/2; i++) {
    cout << i*2-1 << " ";
    second_half += i*2-1;
  }
  cout << first_half-second_half << "\n";
}

int main() {
  cin.sync_with_stdio(0);
  cin.tie(0);
  int tests = 1;
  cin >> tests;
  while (tests--) solve();
  return 0;
}
