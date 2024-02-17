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

  vector<long long> vec(2*n);
  for (auto &e: vec) cin >> e;

  sort(vec.begin(), vec.end());

  ll score = 0;
  for (int i=0; i+1<2*n; i+=2) {
    score += min(vec[i],vec[i+1]);
  }
  p(score);
  
}

int main() {
  int tests = 1;
  cin >> tests;
  while (tests--) solve();
  return 0;
}
