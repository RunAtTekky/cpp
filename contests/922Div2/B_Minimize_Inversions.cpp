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
  
  vector<long long> vec2(n);
  for (auto &e: vec2) cin >> e;

  vector<ll> nums(n);
  iota(nums.begin(), nums.end(), 0);

  sort(nums.begin(), nums.end(), [&vec](int x, int y) {
    return vec[x] < vec[y];
  });

  // for (auto &e: nums) cout << e << " ";
  // cout << "\n";
  
  for (int i=0; i<n; i++) {
    cout << vec[nums[i]] << " ";
  }
  cout << "\n";
  for (int i=0; i<n; i++) {
    cout << vec2[nums[i]] << " ";
  }
  cout << "\n";
  
  
}

int main() {
  int tests = 1;
  cin >> tests;
  while (tests--) solve();
  return 0;
}
