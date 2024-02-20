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

ll getSum(ll x) {
  ll sum = 0;
  while (x>0) {
    sum += x%10;
    x /= 10;
  }
  return sum;
}
void solve() {
  ll n;
  cin >> n;
  
  ll totalSum = 0;
  for (int i=1; i<=n; i++) {
    totalSum += getSum(i);
  }
  p(totalSum);
}

int main() {
  int tests = 1;
  cin >> tests;
  while (tests--) solve();
  return 0;
}
