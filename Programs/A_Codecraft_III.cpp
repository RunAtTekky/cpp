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
  // ll n;
  // cin >> n;
  
  string month;
  cin >> month;

  int k; cin >> k;

  string months[12] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};

  int currMonth = 0;
  for (int i=0; i<12; i++) {
    if (months[i] == month) {
      currMonth = i;
      break;
    }
  }

  int releaseMonth = (currMonth+k)%12;

  p(months[releaseMonth]);
}

int main() {
  int tests = 1;
  // cin >> tests;
  while (tests--) solve();
  return 0;
}
