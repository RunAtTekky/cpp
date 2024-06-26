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
  
  sort(vec.begin(), vec.end(), greater<int>());

  vector<ll> prefix(n+1);
  for (int i=0; i<n; i++) {
    prefix[i+1] = prefix[i] + vec[i];
  }

  ll S = accumulate(vec.begin(), vec.end(), 0LL);

  ll need = 0;
  while (prefix[need] < S/2) need++;

  ll total_moves = (S+1)/2 + need;

  p(total_moves);
  
}

int main() {
  cin.sync_with_stdio(0);
  cin.tie(0);
  int tests = 1;
  cin >> tests;
  while (tests--) solve();
  return 0;
}
