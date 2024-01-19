/*
  RunAt - grey
*/
#include <iostream>
#include <numeric>
#include <algorithm>
#include <vector>
using namespace std;

typedef int long long ll;
#define p(a) cout << a << "\n";

void solve() {
  ll n;
  cin >> n;
  
  vector<long long> vec(n);
  for (auto &e: vec) cin >> e;
  
  ll m;
  cin >> m;

  vector<long long> vec2(n);
  for (int i=0; i<n; i++) {
    vec2[i] = vec[i];
  }

  sort(vec.begin(), vec.end());

  vector<long long> preSumNormal(n+1);
  vector<long long> preSumSorted(n+1);

  partial_sum(vec.begin(), vec.end(), preSumSorted.begin()+1);
  partial_sum(vec2.begin(), vec2.end(), preSumNormal.begin()+1);

  for (int i=0; i<m; i++) {
    ll type; cin >> type;
    ll l,r; cin >> l >> r;

    ll res = 0;

    if (type == 1) {
      res = preSumNormal[r] - preSumNormal[l-1];
    }
    else {
      res = preSumSorted[r] - preSumSorted[l-1];
    }
    p(res);
  }
  
}

int main() {
  int tests = 1;
  // cin >> tests;
  while (tests--) solve();
  return 0;
}
