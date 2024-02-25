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
  
  int allNeg = 1;
  for (auto &e: vec) {
    allNeg = allNeg&(e<0);
  }

  if (allNeg) {
    p(*max_element(vec.begin(), vec.end()));
    return;
  }

  ll odds = 0;
  ll evens = 0;
  for (int i=0; i<n; i++) {
    if (i&1) {
      odds += max(vec[i],0LL);
    }
    else {
      evens += max(vec[i],0LL);
    }
  }

  p(max(odds,evens));

}

int main() {
  int tests = 1;
  cin >> tests;
  while (tests--) solve();
  return 0;
}
