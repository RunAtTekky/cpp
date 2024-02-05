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
  ll n,m;
  cin >> n >> m;
  
  ll tempN = n;
  ll k = 1;

  ll cnt2=0, cnt5=0;

  while (n>0 && n%2==0) {
    cnt2++;
    n/=2;
  }
  while (n>0 && n%5==0) {
    cnt5++;
    n/=5;
  }

  // We have to make as many 5*2 as possible.
  // Thus if cnt2<cnt5 then multiply 2 as many times as possible.
  // Or multiply 5 as many times as possible.
  // When they become equal then multiply by 10 as many times as possible.
  while (cnt2<cnt5 && k*2<=m) {
    cnt2++;
    k*=2;
  }

  while (cnt5<cnt2 && k*5<=m) {
    cnt5++;
    k*=5;
  }

  while (k*10<=m) {
    k*=10;
  }


  // When there is no multiple 2 or 5 and we can't multiply by 10
  // Then k will be 1.
  if (k==1) {
    p(tempN*m);
  }
  else {
    // Now we know (m/k) < 10 so if we multiply k by that
    // And then multiply tempN*k we will get the max round possible.
    k = k*(m/k);
    p(tempN*k);
  }
}

int main() {
  int tests = 1;
  cin >> tests;
  while (tests--) solve();
  return 0;
}
