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
  ll n;
  cin >> n;

  vector<ll> vec(n+1);
  for (int i=1; i<=n; i++) {
    cin >> vec[i];
  }

  ll q; cin >> q;
  for (int i=1; i<=q; i++) {
    ll l,r; cin >> l >> r;
    map<ll,ll> freq;
    int f=-1;
    int s=-1;
    for (int j=l; j<=r; j++) {
      if (freq.size() == 0) {
        f = j;
        freq[vec[j]]++;
      }
      if(freq.size() == 1 && freq[vec[j]]++ == 0) {
        s = j;
      }
    }
    if (freq.size() >= 2) {
      p2(l,s);
    }
    else {
      p2(-1,-1);
    }
  }
  cout << "\n";
}

int main() {
  int tests = 1;
  cin >> tests;
  while (tests--) solve();
  return 0;
}
