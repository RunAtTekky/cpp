/*
    RunAt - grey
*/
#include <iostream>
#include <vector>
using namespace std;

typedef int long long ll;
#define printnl(a) cout << a << "\n";

void solve() {
    ll n;
    cin >> n;
    vector<ll> v(n);
    for (auto &e : v) cin >> e;

    ll curr_mini = INT_MIN;
    ll curr_maxi = INT_MIN;

    bool isPositive = (v[0] > 0) ? true : false;

    ll ans = 0;
    for (int i=0; i<n; i++) {
        if (isPositive) {
            // element is negative
            if (v[i] < 0) {
                isPositive = false;
                ans += curr_maxi;
                curr_maxi = INT_MIN;
                curr_mini = max(curr_mini, v[i]);
            }
            else {
                curr_maxi = max(curr_maxi,v[i]);
            }
        } else {
            if (v[i] > 0) {
                isPositive = true;
                ans += curr_mini;
                curr_mini = INT_MIN;
                curr_maxi = max(curr_maxi, v[i]);
            } else {
                curr_mini = max(curr_mini,v[i]);
            }
        }
    }
    ans += (isPositive) ? curr_maxi : curr_mini;
    printnl(ans);
}


int main() {
    int tests = 1;
    cin >> tests;
    while (tests--) solve();
    return 0;
}