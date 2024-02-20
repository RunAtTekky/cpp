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

const int MOD = 1e9+7;

const int N = 2e5+1;
ll countSum(ll x) {
  ll sum = 0;
  while (x>0) {
    sum += x%10;
    x /= 10;
  }
  return sum;
}

vector<int> pre(N);
void preCompute() {
  ll totalSum = 0;
  for (int i=1; i<=N; i++) {
    totalSum += countSum(i);
    pre[i] = totalSum;
  }
}

void solve() {
  ll n;
  cin >> n;

  p(pre[n]);

}

int main() {
  int tests = 1;
  preCompute();
  cin >> tests;
  while (tests--) solve();
  return 0;
}
