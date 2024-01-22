/*
    RunAt - grey
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

  int curr = n;

  vector<int> ans;
  for (int i=2; i*i<=n; i++) {
    if (curr%i == 0) {ans.push_back(i); curr=curr/i;}
    if (ans.size() == 2) {
      if (ans[0] == curr || ans[1] == curr) {NO; return;}
      else {
        ans.push_back(curr);
        YES;
        for (auto &e: ans) {cout << e << " ";}
        cout << "\n";
        return;
      }
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
