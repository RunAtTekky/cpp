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

const int N = 2e5+5;
const int MOD = 1e9+7;

void solve() {
  ll n,m,k;
  cin >> n >> m >> k;
  
  vector<long long> vec(k+1);
  for (int i=0; i<n; i++) {
    int ele; cin >> ele;
    if (ele > k) continue;
    vec[ele] = 1;
  }
  
  vector<long long> vec2(k+1);
  for (int i=0; i<m; i++) {
    int ele; cin >> ele;
    if (ele > k) continue;
    vec2[ele] = 1;
  }
  int first = 0;
  int second = 0;

  int same = 0;
  int uniq = 0;
  for (int i=1; i<=k; i++) {
    if ((vec[i]||vec2[i]) == 0) {
      NO; return;
    }
    if (vec[i] == vec2[i]) same++;
    else if (vec[i]) first++;
    else if (vec2[i]) second++;
  }


  if ((first > (k/2)) || (second > (k/2))) NO;
  else YES;
  
}

int main() {
  int tests = 1;
  cin >> tests;
  while (tests--) solve();
  return 0;
}
