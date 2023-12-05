/*
    RunAt - grey
*/
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
#define printnl(a) cout << a << "\n";
#define printab(a,b) cout << a << " " << b << "\n";
#define readV(vec) for (auto &e: vec) cin >> e;
#define debugV(vec) for (auto &e: vec) {cout << e << " ";} cout << "\n";
#define YES cout << "YES" << "\n"
#define NO cout << "NO" << "\n"

const int N = 100005;

void solve() {
    ll n, P, l, t;
    cin >> n >> P >> l >> t;

    ll tasks = (n+6)/7;
    ll s = 0; ll e = n+1;

    while (s+1<e) {
        ll mid = s + (e-s)/2;
        (mid*l + min(2*mid,tasks)*t >= P) ? (e = mid) : (s = mid);
    }

    printnl(n-e);
}


int main() {
    int tests = 1;
    cin >> tests;
    while (tests--) solve();
    return 0;
}