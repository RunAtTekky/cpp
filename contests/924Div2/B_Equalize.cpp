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
  
  ll ans = 0;

  sort(vec.begin(), vec.end());

  auto it = unique(vec.begin(), vec.end());

  vec.resize(distance(vec.begin(), it));

  ll newN = it - vec.begin();

  for (int i=0; i+1<newN; i++) {
    auto it2 = upper_bound(vec.begin(), vec.end(), vec[i]+n-1) - vec.begin();
    ll ind = it2-i-1;
    ans = max(ans,ind);
  }
  p(ans+1);

  
}

int main() {
  int tests = 1;
  cin >> tests;
  while (tests--) solve();
  return 0;
}
