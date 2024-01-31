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
  for (auto &e: vec) cin >> e;

  int mini = 0; int maxi = INT_MAX;

  /*
    Imagine a line from 0 to 10^9
    This is our possible answer at first
    When ai == ai+1 then every x works
    When a[i] < a[i+1] then lowerBound(half) >= x
    This implies that x must be less than a certain value
    Thus maximum of x can be min(lowerBound, maxi)

    When a[i] > a[i+1] then upperBound(half) <= x
    This implies that x must be greater than a certain value
    Thus minimum of x can be max(upperBound, mini);

    Now when all the elements have been checked.
    We will have two values
    Minimum of x and maximum of x
    If (minimum <= maximum) then an answer exists
    else No answer exists
  */

  for (int i=0; i+1<n; i++) {
    int x = vec[i];
    int y = vec[i+1];

    int lowerBound = (x+y)/2;
    int upperBound = (x+y+1)/2;

    if (x<y) {
      maxi = min(maxi,lowerBound);
    }
    if (x>y) {
      mini = max(mini,upperBound);
    }
  }
  if (mini<=maxi) {p(mini);}
  else p(-1);

}

int main() {
  int tests = 1;
  cin >> tests;
  while (tests--) solve();
  return 0;
}
