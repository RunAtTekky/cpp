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

  vector<long long> vec(n);
  ll fiveCnt = 0, zeroCnt = 0;
  for (auto &e: vec) {
    cin >> e;
    if (e == 5) {
      fiveCnt++;
    }
    else {
      zeroCnt++;
    }
  }

  // If there is no zero 90's 0 can NOT be cancelled.
  if (zeroCnt == 0) {
    p(-1); return;
  }

  string res = "";

  int fives = 9*(fiveCnt/9);
  for (int i=0; i<fives; i++) {
    res.append("5");
  }
  for (int i=0; i<zeroCnt; i++) {
    res.append("0");
  }

  if (!fives) {
    p(0); return;
  }
  p(res);

   

}

int main() {
  int tests = 1;
  // cin >> tests;
  while (tests--) solve();
  return 0;
}
