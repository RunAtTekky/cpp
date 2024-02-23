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
  ll m;
  cin >> m;

  vector<ll> vec;
  for (int i=0; i<m; i++) {
    ll ele; cin >> ele;
    vec.push_back(ele);
  }

  int i=0;
  int ans = 0;
  for (int diff = 1; diff < m; diff=diff<<1) {
    int vecSize = vec.size();
    while (i<vecSize) {
      if (abs(vec[i]-vec[i+1]) > diff) {
        p(-1); return;
      }
      vec.push_back(min(vec[i],vec[i+1]));
      if (vec[i] > vec[i+1]) {
        // p2(vec[i],vec[i+1]);
        ans++;
      }
      i+=2;
    }
  }
  // p(i);
  // for (auto &e: vec) cout << e << " ";
  // cout << "\n";
  
  p(ans);
}

int main() {
  int tests = 1;
  cin >> tests;
  while (tests--) solve();
  return 0;
}
