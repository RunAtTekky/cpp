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
  int n;
  cin >> n;

  vector<long long> vec(n);
  for (auto &e: vec) cin >> e;

  int min_distance = n;
  int lst = -1;

  for (int i=0; i<n; i++) {
    // If problem
    if (vec[i] != vec[0]) {
      // Minimum distance between (last and current value) and prev min_distance
      min_distance = min(min_distance, i-lst-1);
      // Set last index to i to calculate distance next time
      lst = i;
    }
  }

  // Calculate distance between lst and end of list
  min_distance = min(min_distance, n-lst-1);

  if (min_distance == n) {p(-1); return;}
  p(min_distance);

  // vector<int> problems;
  
  // for (int i=1; i+1<n; i++) {
  //   if (vec[i] == vec[0]) continue;
  //   problems.push_back(i);
  //   if (vec[i-1] != vec[i+1]) {
  //     p(0); return;
  //   }
  // }

  // // for (auto &e: problems) cout << e << " ";
  // // cout << "\n";
  
  // int min_distance = INT_MAX;
  // int m = problems.size();
  // if (m == 0) {
  //   p(-1); return;
  // }
  
  // for (int i=1; i<m; i++) {
  //   int dist = problems[i]-problems[i-1];
  //   min_distance = min(min_distance, dist);
  // }

  // int min_fr_or_bk = min(problems[0]+1, (int)(n)-problems[m-1]);
  // min_distance = min(min_distance, min_fr_or_bk);

  // p(min_distance-1);
  // return;
  
}

int main() {
  cin.sync_with_stdio(0);
  cin.tie(0);
  int tests = 1;
  cin >> tests;
  while (tests--) solve();
  return 0;
}
