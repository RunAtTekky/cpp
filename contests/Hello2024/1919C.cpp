/*
    RunAt - grey
*/
// Tourist's solution, I want to see why it works.
#include <iostream>
#include <set>
#include <map>
#include <climits>
#include <string>
#include <numeric>
#include <algorithm>
#include <vector>
using namespace std;

typedef int long long ll;
#define p(a) cout << a << "\n";
#define p2(a,b) cout << a << " " << b << "\n";
#define readV(vec) for (auto &e: vec) cin >> e;
#define debugV(vec) for (auto &e: vec) {cout << e << " ";} cout << "\n";
#define YES cout << "YES" << "\n"
#define NO cout << "NO" << "\n"

const int N = 100005;

void solve() {
    ll n;
    cin >> n;

    vector<ll> vec(n);
    readV(vec);
    
    ll s = n, t = n;
    ll pen = 0;

    for (int i=0; i<n; i++) {
      if (s < t) {
        swap(s,t);
      }

      if (vec[i] <= t) {
        t = vec[i];
      }

      else {
        if (vec[i] <= s) {
          s = vec[i];
        }
        else {
          t = vec[i];
          pen++;
        }
      }
    }
    p(pen);
}


int main() {
    int tests = 1;
    cin >> tests;
    while (tests--) solve();
    return 0;
}
