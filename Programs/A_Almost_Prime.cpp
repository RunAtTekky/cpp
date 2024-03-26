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

const int N = 3001;
const int MOD = 1e9+7;

vector<bool> prime(N, true);
void sieve() {
  for (int p = 2; p * p <= N; p++) {
      if (prime[p] == true) {
          for (int i = p * p; i <= N; i += p)
              prime[i] = false;
      }
  }
}

void solve() {
  ll n;
  cin >> n;

  sieve();

  vector<int> prime_factors(n+1);

  for (int i=2; i<=n; i++) {
    for (int j=2; j<=i; j++) {
      if (i%j==0 && prime[j]) prime_factors[i]++;
    }
  }

  int total = 0;
  for (auto e : prime_factors) {
    total += (e==2) ? 1 : 0 ;
  }
  p(total);



}

int main() {
  cin.sync_with_stdio(0);
  cin.tie(0);
  int tests = 1;
  while (tests--) solve();
  return 0;
}
