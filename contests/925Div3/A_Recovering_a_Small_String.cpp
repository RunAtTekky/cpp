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

  
  for (int i=0; i<26; i++) {
    for (int j=0; j<26; j++) {
      for (int k=0; k<26; k++) {
        if (i+j+k+3 == n) {
          cout << char('a'+i) << char('a'+j) << char('a'+k) << "\n";
          return;
        }
      }
    }
  }

  
}

int main() {
  int tests = 1;
  cin >> tests;
  while (tests--) solve();
  return 0;
}
