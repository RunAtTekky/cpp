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

long long maxSubArraySumDP(vector<long long> &v) {
  long long res = max(0LL,v[0]);
  long long prev = v[0];
  for (int i=1; i<v.size(); i++) {
    long long curr = max(prev + v[i], max(0LL,v[i]));
    prev = curr;
    res = max(res,curr);
  }
  return res;
}

void solve() {
  ll n, k;
  cin >> n >> k;

  vector<long long> v(n);
  for (auto &e: v) cin >> e;

  ll ans = maxSubArraySumDP(v);
  ll OGans = ans;

  for (int i=1; i<=k; i++) {
    ans = (ans%MOD + ans%MOD)%MOD;
  }

  ll sum = accumulate(v.begin(), v.end(), 0LL);
  ll sol = ans + (sum - OGans);

  p((sol%MOD+MOD)%MOD);
}

int main() {
  cin.sync_with_stdio(0);
  cin.tie(0);
  int tests = 1;
  cin >> tests;
  while (tests--) solve();
  return 0;
}
