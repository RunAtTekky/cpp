/*
    RunAt - grey
*/
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

typedef int long long ll;
#define printnl(a) cout << a << "\n";

ll getPairs(vector<ll> &v, ll t) {
    auto ind = upper_bound(v.begin(), v.end(), t) - v.begin();
    return v.size() - ind;
}
void solve() {
    ll n;
    cin >> n;

    vector<pair<ll,ll>> v;
    for (int i=1; i<=n; i++) {
        ll f;
        cin >> f;
        if (f<i) {
            v.push_back({f,i});
        }
    }

    sort(v.begin(), v.end());

    vector<ll> val;
    for (auto &pr: v) {
        val.push_back(pr.first);
    }

    ll ans = 0;
    for (auto &pr: v) {
        ans += getPairs(val,pr.second);
    }
    printnl(ans);

}


int main() {
    int tests = 1;
    cin >> tests;
    while (tests--) solve();
    return 0;
}