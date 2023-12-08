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
    ll n,m;
    cin >> n >> m;

    // 1, 4, 9, 16, 25
    // 4,4
    // 9 + 4 = 13
    // 4,5
    // As max is odd
    // 25 - 4

    ll maxi = max(n,m);
    ll mini = maxi^n^m;

    // printab(maxi,mini);
    ll cell = 0;
    if (n>m) {
        if (maxi&1) {
            cell = (maxi-1)*(maxi-1) + mini;
        } else {
            cell = (maxi-1)*(maxi-1) + (2*maxi) - mini;
        }
    } else {
        if (maxi&1) {
            cell = maxi*maxi - mini + 1;
        } else {
            cell = (maxi-1)*(maxi-1) + mini;
        }
    }
    printnl(cell);
}


int main() {
    int tests = 1;
    cin >> tests;
    while (tests--) solve();
    return 0;
}