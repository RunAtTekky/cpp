/*
    RunAt - grey
*/
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

typedef int long long ll;
#define printnl(a) cout << a << "\n";
#define YES cout << "YES" << "\n"
#define NO cout << "NO" << "\n"

void solve() {
    ll n,k;
    cin >> n >> k;

    vector<pair<ll,ll>> mon(n);

    for (int i=0; i<n; i++) cin >> mon[i].first;
    for (int i=0; i<n; i++) cin >> mon[i].second;

    sort(mon.begin(), mon.end());

    vector<ll> health(n);
    for (int i=0; i<n; i++) health[i] = mon[i].first;

    for (int i=n-2; i>=0; i--) mon[i].second = min(mon[i+1].second, mon[i].second);

    ll totalK = k;

    while (k>0) {
        auto it = upper_bound(health.begin(), health.end(), totalK) - health.begin();
        if (it == n) {YES; return;}

        k -= mon[it].second;
        totalK += k;
    }
    NO;
}


int main() {
    int tests = 1;
    cin >> tests;
    while (tests--) solve();
    return 0;
}