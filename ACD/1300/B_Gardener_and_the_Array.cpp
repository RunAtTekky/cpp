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
#define YES cout << "Yes" << "\n"
#define NO cout << "No" << "\n"

const int N = 1e5+5;
const int MOD = 1e9+7;

void solve() {
  ll n;
  cin >> n;

  map<int,int> mp;
  vector<vector<int>> v(n);

  for (int i=0; i<n; i++) {
    int k; cin >> k;
    v[i].resize(k);
    for (int j=0; j<k; j++) {
      cin >> v[i][j];
      mp[v[i][j]]++;
    }
  }

  for (int i=0; i<n; i++) {
    bool skp = false;
    for (int j=0; j<v[i].size(); j++) {
      if (mp[v[i][j]] == 1) {
        skp = true;
        break;
      }
    }
    if (!skp) {
      YES;
      return;
    }
  }
  NO;
}

int main() {
  int tests = 1;
  cin >> tests;
  while (tests--) solve();
  return 0;
}
