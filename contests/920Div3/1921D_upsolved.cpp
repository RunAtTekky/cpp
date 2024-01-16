/*
    RunAt - grey
*/
#include <iostream>
#include <cmath>
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
#define printV(vec) for (auto &e: vec) {cout << e << " ";} cout << "\n";
#define YES cout << "YES" << "\n"
#define NO cout << "NO" << "\n"

const int N = 100005;

void solve() {
    ll n,m;
    cin >> n >> m;
    
    vector<long long> vec(n);
    for (auto &e: vec) cin >> e;
    
    vector<long long> vec2(m);
    for (auto &e: vec2) cin >> e;
    
    sort(vec.begin(), vec.end());
    sort(vec2.begin(), vec2.end());

    int l1 = 0, r1 = n-1;
    int l2 = 0, r2 = m-1;

    ll ans = 0;
    while (l1<=r1) {
        ll lDiff = abs(vec[l1]-vec2[r2]);
        ll rDiff = abs(vec[r1]-vec2[l2]);

        // For some reason it doesn't matter if I put the
        // equals to condition or not.
        if (lDiff < rDiff) {
            ans += rDiff;
            r1--; l2++;
        }
        else {
            ans += lDiff;
            l1++; r2--;
        }
    }
    p(ans);

}

int main() {
    int tests = 1;
    cin >> tests;
    while (tests--) solve();
    return 0;
}