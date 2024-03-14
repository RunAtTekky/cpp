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
  vector<vector<char>> grid(3);
  
  for (int i=0; i<3; i++) {
    string s; cin >> s;
    for (int j=0; j<3; j++) {
      grid[i].push_back(s[j]);
    }
  }

  string res = "DDD";
  vector<pair<int,int>> vp;
  for (int i=0; i<3; i++) {
    for (int j=0; j<3; j++) {
      vp.push_back({i,j});
    }
  }

  for (auto pr : vp) {
    for (auto pr1 : vp) {
      for (auto pr2 : vp) {
        
        if (pr == pr1) continue;
        if (pr == pr2) continue;
        if (pr1 == pr2) continue;

        if (abs(pr.first-pr1.first) > 1 || abs(pr1.first-pr2.first) > 1) continue;
        if (abs(pr.second-pr1.second) > 1 || abs(pr1.second-pr2.second) > 1) continue;

        string combination = "";
        combination.push_back(grid[pr.first][pr.second]);
        combination.push_back(grid[pr1.first][pr1.second]);
        combination.push_back(grid[pr2.first][pr2.second]);

        res = min(res, combination);
      }
    }
  }
  p(res);

  
}

int main() {
  cin.sync_with_stdio(0);
  cin.tie(0);
  int tests = 1;
  // cin >> tests;
  while (tests--) solve();
  return 0;
}
