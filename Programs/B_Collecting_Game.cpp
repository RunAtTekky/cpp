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

  vector<pair<ll,ll>> vp(n);

  for (int i=0; i<n; i++) {
    cin >> vp[i].first;
    vp[i].second = i;
  }

  sort(vp.begin(), vp.end());
  
  int i=0;
  ll score = 0;
  while (i<n) {
    score += vp[i].first;
    int j = i+1;
    while (j<n && vp[j].first <= score) {
      score += vp[j].first;
      j++;
    }
    int toAdd = j-1; // (i + (j-i-1) == j-1)
    for (int k=i; k<j; k++) {
      vp[k].first = toAdd;
    }
    i = j;
  }

  sort(vp.begin(), vp.end(), [](auto &x, auto &y) {
    return x.second < y.second;
  });

  for (auto &e: vp) cout << e.first << " ";
  cout << "\n";
  
  


}

int main() {
  int tests = 1;
  cin >> tests;
  while (tests--) solve();
  return 0;
}
