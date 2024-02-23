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
  
  vector<long long> vec(n);
  for (auto &e: vec) cin >> e;
  
  vector<long long> vec2(n);
  for (auto &e: vec2) cin >> e;

  vector<pair<ll,ll>> vp(n);
  for (int i=0; i<n; i++) {
    vp[i].first = abs(vec2[i]);
    vp[i].second = vec[i];
  }

  // sort(vp.begin(), vp.end());

  vector<ll> health(n+1);

  for (int i=0; i<n; i++) {
    health[vp[i].first] += vp[i].second;
  }


  vector<ll> pref(n+1);
  partial_sum(health.begin(), health.end(), pref.begin());

  ll bullets = 0;
  for (int i=1; i<=n; i++) {
    bullets = i*k;
    if (pref[i] > bullets) {NO; return;}
  }
  YES;
  
  // for (auto &e: health) cout << e << " ";
  // cout << "\n";
  

  // for (auto &[x,y]: vp) {
  //   p2(x,y);
  // }

  // int i=0; 
  // int j=0;
  // while (i<n) {
  //   j=i;
  //   int bullets = k;
  //   if (vp[j].second > bullets) {NO; return;}
  //   while (j<n && vp[j].second < bullets) {
  //     j++; bullets -= vp[j].second;
  //   }
  //   if (j==n) {YES; return;}
  //   vp[j].second -= bullets;
  //   i=j;
  // }



  
}

int main() {
  int tests = 1;
  cin >> tests;
  while (tests--) solve();
  return 0;
}
