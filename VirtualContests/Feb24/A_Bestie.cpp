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

ll getGCDofAll(vector<ll> vec) {
  ll gc = vec[0];
  for (int i=1; i<vec.size(); i++) {
    gc = __gcd(gc,vec[i]);
  }
  return gc;
}

bool isNotPresent(vector<ll> vec, ll x) {
  int isNotPresent = 1;
  for (auto &e: vec) {
    isNotPresent &= (e != x);
  }
  return isNotPresent;
}

void solve() {
  ll n;
  cin >> n;
  
  vector<long long> vec(n);
  for (auto &e: vec) cin >> e;
  
  if (getGCDofAll(vec) == 1) {p(0); return;}

  vector<ll> temp;
  temp = vec;

  temp = vec;
  temp[n-1] = __gcd(temp[n-1], n);
  if (getGCDofAll(temp) == 1) {p(1); return;}

  temp = vec;
  temp[n-2] = __gcd(temp[n-2], n-1);
  if (getGCDofAll(temp) == 1) {p(2); return;}

  temp = vec;
  temp[n-1] = __gcd(temp[n-1], n);
  temp[n-2] = __gcd(temp[n-2], n-1);
  if (getGCDofAll(temp) == 1) {p(3); return;}
}

int main() {
  cin.sync_with_stdio(0);
  cin.tie(0);
  int tests = 1;
  cin >> tests;
  while (tests--) solve();
  return 0;
}
