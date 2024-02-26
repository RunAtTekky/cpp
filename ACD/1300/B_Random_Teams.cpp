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
#define YES cout << "YES" << "\n"
#define NO cout << "NO" << "\n"

const int N = 1e5+5;
const int MOD = 1e9+7;


ll nC2 (ll n) {
  return n*(n-1)/2;
}



void solve() {
  ll n,m;
  cin >> n >> m;
  
  /*
  Fairly EZ to understand.
  We want as many people in one group.
  Put one in all other groups and in one group put all else.
  n - (m-1)*1 == n-m+1
  All other group with one person makes 0 friends.
  n-m+1 makes nC2 friends.
  */
 
  ll maxi = nC2(n-m+1);

  /*
  Pretty complicated.
  Spread as evenly as possible.
  There could be extras which would not be spread evenly.
  We now put those extras in their positions.
  They would make (n/m)+1 in one team.
  Others which would be spread evenly will make n/m members.
  Take sum of them.
  */
  ll mini = nC2(n/m)*(m - n%m) + nC2(n/m + 1)*(n%m);

  p2(mini, maxi);

}

int main() {
  cin.sync_with_stdio(0);
  cin.tie(0);
  int tests = 1;
  // cin >> tests;
  while (tests--) solve();
  return 0;
}
