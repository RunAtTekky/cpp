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

  vector<ll> pre(n);
  for (int i=1; i<n; i++) {
    pre[i] = pre[i-1] + abs(vec[i]-vec[i-1]);
  } 


  ll q; cin >> q;
  for (int i=0; i<q; i++) {
    int l,r; cin >> l >> r;

    l--; r--;
    if (pre[l] == pre[r]) {
      p2(-1,-1);
    }
    else {
      int j = upper_bound(pre.begin()+l, pre.begin()+r+1,pre[l]) - pre.begin();
      p2(l+1,j+1);
    }
  }
}

int main() {
  int tests = 1;
  cin >> tests;
  while (tests--) solve();
  return 0;
}
