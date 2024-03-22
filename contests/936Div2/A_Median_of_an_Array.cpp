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

  vector<long long> vec(n+1);
  for (int i=1; i<=n; i++) {
    cin >> vec[i];
  }
  
  sort(vec.begin(), vec.end());

  // for (auto &e: vec) cout << e << " ";
  // cout << "\n";
  

  ll count = 0;

  ll mid = ceil(n/(double)2);
  ll median = vec[mid];

  // p2(mid,median);

  for (int i=mid; i<n+1; i++) {
    if (vec[i] == median) count++;
  }

  p(count);
}

int main() {
  cin.sync_with_stdio(0);
  cin.tie(0);
  int tests = 1;
  cin >> tests;
  while (tests--) solve();
  return 0;
}
