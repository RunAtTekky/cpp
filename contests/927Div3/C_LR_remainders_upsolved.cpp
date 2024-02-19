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
  ll n,m;
  cin >> n >> m;

  vector<long long> vec(n);
  for (auto &e: vec) cin >> e;
  
  string c; cin >> c;

  int l = 0;
  int r = n-1;

  vector<ll> ans;

  for (int i=0; i<n; i++) {
    if (c[i] == 'L') {
      ans.push_back(vec[l]);
      l++;
    }
    else {
      ans.push_back(vec[r]);
      r--;
    }
  }

  vector<ll> remainders;

  ll prod = 1;
  for (int i=n-1; i>=0; i--) {
    prod = (ans[i]*prod)%m;
    prod %= m;
    remainders.push_back(prod);
  }

  for (int i=n-1; i>=0; i--) {
    cout << remainders[i] << " ";
  }
  cout << "\n";
  

}

int main() {
  int tests = 1;
  cin >> tests;
  while (tests--) solve();
  return 0;
}
