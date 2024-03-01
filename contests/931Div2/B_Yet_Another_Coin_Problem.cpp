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

map<ll,ll> mp;
vector<ll> coins(150);

void prec () {
  mp[1]++;
  mp[3]++;
  mp[6]++;
  mp[10]++;
  mp[15]++;

  iota(coins.begin(), coins.end(), 0);

  coins[1] = 1;
  coins[3] = 1;
  coins[6] = 1;
  coins[10] = 1;
  coins[15] = 1;

  for (int i=1; i<=100; i++) {
    for (auto &[x,y]: mp) {
      for (int j=i+x; j<=100; j+=x) {
        coins[j] = min(coins[j], coins[i] + (j-i)/x);
      }
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
