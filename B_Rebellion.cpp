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
  
  int i=0;
  int j=n-1;

  int ans = 0;
  while (i<j) {
    while (i<j && vec[i] != 1) i++;
    if (i>=j) break;

    while (i<j && vec[j] != 0) j--;
    if (i>=j) break;

    ans++;
    i++; j--;
  }
  p(ans);
}

int main() {
  int tests = 1;
  cin >> tests;
  while (tests--) solve();
  return 0;
}
