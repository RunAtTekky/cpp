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
#define printV(vec) for (auto &e: vec) {cout << e << " ";} cout << "\n";
#define YES cout << "YES" << "\n"
#define NO cout << "NO" << "\n"

const int N = 100005;

void solve() {
    ll n;
    cin >> n;

    vector<long long> vec(n);
    for (auto &e: vec) cin >> e;

    sort(vec.begin(), vec.end());
    
    ll q; cin >> q;

    for (int i=1; i<=q; i++) {
        ll coins; cin >> coins;

        if (coins < vec[0]) {p(0); continue;}
        if (coins >= vec[n-1]) {p(n); continue;}

        auto it = upper_bound(vec.begin(), vec.end(),coins) - vec.begin();
        p(it);
        
    }

      
}

int main() {
    int tests = 1;
    // cin >> tests;
    while(tests--) solve();
    return 0;
}
