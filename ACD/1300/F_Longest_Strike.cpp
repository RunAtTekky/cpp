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
  ll n,k;
  cin >> n >> k;
  
  vector<pair<ll,ll>> pr;
  map<ll,ll> mp;

  for (int i=0; i<n; i++) {
    ll num; cin >> num;
    mp[num]++;
  }

  for (auto &e: mp) {
    pr.push_back({e.first,e.second});
  }
  
  // for (auto &[x,y]: pr) {
  //   p2(x,y);
  // }

  int i=0;
  ll maxi = 0;
  ll lAns = -1;
  ll rAns = -1;
  while (i<pr.size()) {
    if (pr[i].second >= k) {
      int l = pr[i].first;
      int r = pr[i].first;

      int j = i;
      while (j+1<pr.size() && pr[j].first+1 == pr[j+1].first && pr[j+1].second >= k) {
        r = pr[j+1].first;
        j++;
      }
      if (r-l >= maxi) {
        lAns = l; rAns = r;
        maxi = r-l;
      }
      i = j+1;
    }
    else {
      i++;
    }
  }
  if (lAns == -1) {
    p(-1);
  }
  else {
    p2(lAns,rAns);
  }
  
}

int main() {
  int tests = 1;
  cin >> tests;
  while (tests--) solve();
  return 0;
}
