#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

#define ll long long
#define printnl(a) cout << a << "\n";

void solve() {
    ll n; cin >> n;
    vector<ll> spend(n);
    vector<ll> have(n);
    for (int i=0; i<n; i++) cin >> spend[i];
    for (int i=0; i<n; i++) cin >> have[i];

    vector<ll> diff;
    for (int i=0; i<n; i++) {
        ll ele = have[i]-spend[i];
        diff.push_back(ele);
    }
    sort(diff.begin(),diff.end());

    // for (auto e : diff) cout << e << " ";
    // cout << "\n";
    int i=0; int j=n-1;
    ll cnt = 0;
    while (i<j) {
        if (diff[i]+diff[j]>=0) {
            cnt++;
            i++; j--;
        } else i++;
    }
    printnl(cnt);
}


int main() {
    int tests; cin >> tests;
    while (tests--) solve();
    return 0;
}