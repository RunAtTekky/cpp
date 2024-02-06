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
  ll n, m;
  cin >> n >> m;

  ll twos = 0;
  ll threes = 0;
  if (m%2==0) {twos = m/2;} 
  else {twos = m/2-1; threes = 1;}

  ll res = n*(twos+threes);
  p(res);
}

int main() {
  int tests = 1;
  cin >> tests;
  while (tests--) solve();
  return 0;
}