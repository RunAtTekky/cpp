#include <iostream>
#include <map>
#include <climits>
#include <algorithm>
#include <numeric>
#include <string>
#include <vector>
using namespace std;

#define ll long long
#define printnl(a) cout << a << "\n";

void solve() {
    ll n;
    cin >> n;

    vector<ll> preSum(n);
    ll prev = 0;
    for (int i=0; i<n; i++) {
        ll ele; cin >> ele;
        preSum[i] = prev + ele;
        prev = preSum[i];
    }
    ll ans = 0;
    for (int k=1; k<n; k++) {
        if (n%k!=0) continue;
        ll mn = LLONG_MAX;
        ll mx = LLONG_MIN;
        ll prev = 0;
        for (int b=k-1; b<n; b += k) {
            ll s = preSum[b] - prev;
            prev = preSum[b];
            mn = min(mn,s);
            mx = max(mx,s);
        }
        ans = max(ans,abs(mx-mn));
    } 
    printnl(ans);
}


int main() {
    int tests; cin >> tests;
    while (tests--) solve();
    return 0;
}