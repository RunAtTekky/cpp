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
  ll n,q;
  cin >> n >> q;
  
  vector<int> vec(n);
  for (auto &e: vec) cin >> e;
  
  vector<vector<int>> winning_index(n+1);

  int curr_max = vec[0];

  if (vec[0] != n) {
    for (int i=1; i<n; i++) {
      curr_max = max(curr_max, vec[i]);
      winning_index[curr_max].push_back(i);

      if (vec[i] == n) break;
    }
  }

  int rounds = max_element(vec.begin(), vec.end()) - vec.begin();

  while (q--) {
    int i,k;
    cin >> i >> k;
    i--;

    int wins = upper_bound(winning_index[vec[i]].begin(), winning_index[vec[i]].end(), k) - winning_index[vec[i]].begin();

    if (vec[i] == n && k>rounds) {
      wins += k-rounds;
    }
    p(wins);
  }
}

int main() {
  cin.sync_with_stdio(0);
  cin.tie(0);
  int tests = 1;
  cin >> tests;
  while (tests--) solve();
  return 0;
}
