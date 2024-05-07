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

vector<ll> getWins(vector<ll> v) {
  int n = v.size();
  vector<ll> wins(n);
  for (int i=1,j=0; i<n; i++) {
    if (v[j] < v[i]) j = i;
    wins[j]++;
  }
  return wins;
}

void solve() {
  ll n, k;
  cin >> n >> k;

  vector<long long> vec(n);
  for (auto &e: vec) cin >> e;

  auto wins = getWins(vec);
  ll ans = wins[k-1];

  swap(vec[k-1], vec[0]);
  wins = getWins(vec);
  ans = max(ans, wins[0]);
  swap(vec[k-1], vec[0]);

  ll firstGreater = find_if(vec.begin(), vec.end(), 
    [&] (int e) {return e > vec[k-1];}
  ) - vec.begin();
  swap(vec[k-1], vec[firstGreater]);
  wins = getWins(vec);
  ans = max(ans, wins[firstGreater]);

  p(ans);
  
  
}

int main() {
  cin.sync_with_stdio(0);
  cin.tie(0);
  int tests = 1;
  cin >> tests;
  while (tests--) solve();
  return 0;
}
