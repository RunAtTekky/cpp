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

  vector<bool> taken(N,false);
  vector<bool> takenRev(N, false);
  vector<ll> pref(n);
  vector<ll> suff(n);

  set<ll> st;

  int curr_MEX = 0;

  for (int i=0; i<n; i++) {
    taken[vec[i]] = true;
    while (taken[curr_MEX]) curr_MEX++;
    pref[i] = curr_MEX;
  }
  
  curr_MEX = 0;
  for (int i=n-1; i>=0; i--) {
    takenRev[vec[i]] = true;
    while (takenRev[curr_MEX]) curr_MEX++;
    suff[i] = curr_MEX;
  }

  for (int i=0; i+1<n; i++) {
    if (pref[i] == suff[i+1]) {
      p(2);
      p2(1,i+1);
      p2(i+2,n);
      return;
    }
  }
  p(-1);
  

}

int main() {
  cin.sync_with_stdio(0);
  cin.tie(0);
  int tests = 1;
  cin >> tests;
  while (tests--) solve();
  return 0;
}
