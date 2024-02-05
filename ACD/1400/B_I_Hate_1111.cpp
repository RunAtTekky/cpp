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
  ll x;
  cin >> x;

  /*
    Using Chicken McNugget Theorem, we know that
    if two numbers are relatively prime, then the largest 
    positive number which may not be of ax + by form is
    m*n - m - n
    As we know, only 11 and 111 are useful in this case.
    Thus the greatest number which may not be of form 11a + 111b is
    111*11 - 11 - 111
  */

 ll greatestNum = 111*11 - 11 - 111;

 if (x>greatestNum) {YES; return;}

 for (int i=0; i<=11; i++) {
  if (x-111*i < 0) continue;
  if ((x-111*i)%11 == 0) {YES; return;}
 }
 NO;

}

int main() {
  int tests = 1;
  cin >> tests;
  while (tests--) solve();
  return 0;
}
