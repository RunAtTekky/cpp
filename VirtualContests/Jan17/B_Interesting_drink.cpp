/*
    RunAt - grey
*/
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

typedef int long long ll;
#define p(a) cout << a << "\n";

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
