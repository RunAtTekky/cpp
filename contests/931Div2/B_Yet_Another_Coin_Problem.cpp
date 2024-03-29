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

vector<ll> a;
vector<ll> coins(150);

void prec () {
  
  a = {1,3,6,10,15};

  iota(coins.begin(), coins.end(), 0);

  for (int i=0; i<=100; i++) {
    for (auto x: a) {
      if (i+x<=100)
        coins[i+x] = min(coins[i+x], coins[i]+1);
    }
  }

}

void solve() {
  ll n;
  cin >> n;

  ll totalCoins = 0;

  if (n>45) {
    totalCoins = n/15 - 1;

    n = n - 15*(totalCoins);
  } 
  

  totalCoins += coins[n];

  p(totalCoins);
  
  
}

int main() {
  cin.sync_with_stdio(0);
  cin.tie(0);
  prec();
  // for (auto &e: coins) cout << e << " ";
  // cout << "\n";
  int tests = 1;
  cin >> tests;
  while (tests--) solve();
  return 0;
}
