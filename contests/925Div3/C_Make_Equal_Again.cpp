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

void solve() {
  ll n;
  cin >> n;
  
  vector<long long> vec(n);
  for (auto &e: vec) cin >> e;
  
  int sameFront = vec[0];
  int sameBack = vec[n-1];

  int i=0, i2=0;
  int j=n-1, j2=n-1;
  int mini = INT_MAX;

  while (i<n && vec[i] == sameFront) i++;
  while (j>=0 && vec[j] == sameFront) j--;
  if (i > j) {
    p(0); return;
  }
  mini = min(mini, j-i+1);

  while (i2<n && vec[i2] == sameBack) i2++;
  while (j2>=0 && vec[j2] == sameBack) j2--;
  if (i2 > j2) {
    p(0); return;
  }
  mini = min(mini, j2-i2+1);
  p(mini);
}

int main() {
  int tests = 1;
  cin >> tests;
  while (tests--) solve();
  return 0;
}
