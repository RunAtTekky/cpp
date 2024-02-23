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


vector<int> factArr(N);
// vector<long long> factArr(N);
void fact() {
  long long res = 1;
  for (int i=1; i<=N; i++) {
    res = (res*i)%MOD;
    factArr[i] = res;
  }
}

void solve() {
  ll n;
  cin >> n;

  p(factArr[n]);

  
}

int main() {
  int tests = 1;
  fact();
  cin >> tests;
  while (tests--) solve();
  return 0;
}
