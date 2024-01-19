/*
    RunAt - grey
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
    string a,b,c;
    cin >> a >> b >> c;

    for (int i=0; i<n; i++) {
      if (a[i] != b[i]) {
        if (a[i] != c[i] && b[i] != c[i]) {YES; return;}
      }
      if (a[i] == b[i] && a[i] != c[i]) {YES; return;}

    }
    NO;
}

int main() {
    int tests = 1;
    cin >> tests;
    while (tests--) solve();
    return 0;
}
