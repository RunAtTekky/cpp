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
    bool xNeg = false;
    bool yNeg = false;
    bool xPos = false;
    bool yPos = false;
    for (int i=1; i<=n; i++) {
        int a,b; cin >> a >> b;
        if (a < 0) xNeg = true;
        if (a > 0) xPos = true;
        if (b < 0) yNeg = true;
        if (b > 0) yPos = true;
    }
    if (xNeg + xPos + yNeg + yPos >= 4) {NO;}
    else {YES;}
}


int main() {
    int tests = 1;
    cin >> tests;
    while (tests--) solve();
    return 0;
}