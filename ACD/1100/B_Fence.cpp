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
  ll n,k;
  cin >> n >> k;

  vector<long long> vec(n);
  for (auto &e: vec) cin >> e;
  
  vector<int> pref(n+1);
  partial_sum(vec.begin(), vec.end(), pref.begin()+1);

  int mini = INT_MAX;
  int minIndex = -1;
  for (int i=0; i+k<=n; i++) {
    int diff = pref[i+k]-pref[i];

    if (diff < mini) {
      mini = diff;
      minIndex = i;
    }
  }
  p(minIndex+1);

}

int main() {
  int tests = 1;
  // cin >> tests;
  while (tests--) solve();
  return 0;
}
