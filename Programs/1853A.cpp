#include <iostream>
#include <algorithm>
#include <numeric>
#include <vector>
using namespace std;

#define ll long long
#define printnl(a) cout << a << "\n";

void solve() {
    ll n;
    cin >> n;

    vector<int> v(n);
    for (int i=0; i<n; i++) {
        cin >> v[i];
    }
    if (!is_sorted(v.begin(),v.end())) {
        printnl(0);
        return;
    }
    ll minDiff = INT_MAX;
    for (int i=1; i<n; i++) {
        ll diff = v[i] - v[i-1];
        minDiff = min(minDiff,diff);
    }
    printnl(minDiff/2 + 1);
}


int main() {
    int tests;
    cin >> tests;
    
    while (tests--) {
        solve();
    }
    
    return 0;
}