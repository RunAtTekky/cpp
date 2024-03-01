/*
    RunAt - green
*/
#include <iostream>
#include <set>
#include <climits>
#include <cmath>
#include <numeric>
#include <map>
#include <unordered_map>
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

  map<string, bool> mp;

  vector<string> vec(n);
  for (int i=0; i<n; i++) {
    cin >> vec[i];
    mp[vec[i]] = true;
  }

  for (auto x: vec) {
    string curr = x;
    bool found = false;

    int m = curr.size();
    for (int i=1; i<m; i++) {
      string firstPart = curr.substr(0,i);
      string secondPart = curr.substr(i,m-i);

      if (mp[firstPart] && mp[secondPart]) {
        cout << "1";
        found = true;
        break;
      }
    }
    if (!found) {
      cout << "0";
    }
  }
  cout << "\n";
}

int main() {
  cin.sync_with_stdio(0);
  cin.tie(0);
  int tests = 1;
  cin >> tests;
  while (tests--) solve();
  return 0;
}
