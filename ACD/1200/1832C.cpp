#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

#define ll long long
#define printnl(a) cout << a << "\n";

void solve() {
    ll n;
    cin >> n;
    vector<ll> v(n);
    for (auto &i : v) cin >> i;

    // unique function returns an iterator till unique elements
    // subtracting that with beginning position gives
    // number of unique elements
    ll uniqueVal = unique(v.begin(),v.end()) - v.begin();
    ll ans = uniqueVal;

    // v[i-1] < v[i] < v[i+1]
    // v[i-1] > v[i] > v[i+1]
    // If this is the case then reduce ans--
    for (int i=1; i<=uniqueVal-2; i++) {
        ans -= (v[i] > v[i-1] && v[i] < v[i+1]);
        ans -= (v[i] < v[i-1] && v[i] > v[i+1]);
    }

    printnl(ans);
}


int main() {
    int tests; cin >> tests;
    while (tests--) solve();
    return 0;
}