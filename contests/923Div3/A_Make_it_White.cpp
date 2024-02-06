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

  string s;
  cin >> s;

  int first = 0;
  int last = 0;
  for (int i=0; i<n; i++) {
    if (s[i] == 'B'){
      first = i;
      break;
    } 
  }
  for (int i=n-1; i>=0; i--) {
    if (s[i] == 'B'){
      last = i;
      break;
    }
  }
  p(last-first+1);
}

int main() {
  int tests = 1;
  cin >> tests;
  while (tests--) solve();
  return 0;
}
