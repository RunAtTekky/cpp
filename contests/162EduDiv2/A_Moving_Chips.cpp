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
  
  ll count = 0;

  int i=0;
  while (i<n && vec[i] != 1) {
    i++;
  }
  int j=n-1;
  while (j>=0 && vec[j] != 1) {
    j--;
  }

  for (int k=i; k<=j; k++) {
    if (vec[k] == 0) count++;
  }
  p(count);
}

int main() {
  int tests = 1;
  cin >> tests;
  while (tests--) solve();
  return 0;
}
