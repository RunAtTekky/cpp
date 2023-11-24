/*
    RunAt - grey
*/
#include <iostream>
#include <vector>
using namespace std;

typedef int long long ll;
#define printnl(a) cout << a << "\n";

void solve() {
    ll n,x;
    cin >> n >> x;

    vector<ll> stations(n);
    for (auto &s : stations) cin >> s;

    ll maxDiff = INT_MIN;
    for (int i=1; i<n; i++) {
        ll diff = stations[i]-stations[i-1];
        maxDiff = max(maxDiff,diff);
    }

    maxDiff = max(maxDiff, 2*(x-stations[n-1]));
    maxDiff = max(maxDiff, stations[0]);
    printnl(maxDiff);
}


int main() {
    int tests = 1;
    cin >> tests;
    while (tests--) solve();
    return 0;
}