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
  ll n;
  cin >> n;
  
  vector<long long> vec(n);
  for (auto &e: vec) cin >> e;
  
  // Get the last index of the element smaller than previous one
  int last = 0;
  for (int i=0; i+1<n; i++) {
    if (vec[i] > vec[i+1]) {
      last = i+1;
    }
  }

  // Break all of the numbers before the 'last' index.
  // It can be proved that we need to break
  // all the numbers before 'last' to make 
  // them less than 'last' index.
  vector<ll> broken_vec;
  for (int i=0; i<last; i++) {
    if (vec[i]/10 != 0) broken_vec.push_back(vec[i]/10);
    broken_vec.push_back(vec[i]%10);
  }

  for (int i=last; i<n; i++) {
    broken_vec.push_back(vec[i]);
  }

  (is_sorted(broken_vec.begin(), broken_vec.end())) ? YES : NO ;
}

int main() {
  cin.sync_with_stdio(0);
  cin.tie(0);
  int tests = 1;
  cin >> tests;
  while (tests--) solve();
  return 0;
}
