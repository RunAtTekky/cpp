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
  
  map<ll,ll> mp;
  vector<ll> present(N);
  vector<ll> v;
  for (int i=0; i<n; i++) {
    ll X = vec[i]+i+1;
    while(mp[X]) X--;
    v.push_back(X);
    mp[X]++;
  }
  
  sort(v.begin(), v.end());
  for (int i=v.size()-1; i>=0; i--) {
    cout << v[i] << " ";
  }
  cout << "\n";
  
}

int main() {
  int tests = 1;
  cin >> tests;
  while (tests--) solve();
  return 0;
}
