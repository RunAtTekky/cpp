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

vector<int> squares;

void solve() {
  ll n,k;
  cin >> n >> k;

  int prev = 0;
  int cardsTillNow = 0;
  for (int i=0; i+1<squares.size(); i++) {
    cardsTillNow += (n+squares[i])/squares[i+1];
    if (k <= cardsTillNow) {
      int ans = squares[i] + squares[i+1]*(k-prev-1);
      p(ans);
      // p2(n,k);
      return;
    }
    prev = cardsTillNow;
  }
  
}

int main() {
  int tests = 1;
  cin >> tests;
  for (int i=0; i<=31; i++) {
    squares.push_back(1<<i);
  }
  while (tests--) solve();
  return 0;
}
