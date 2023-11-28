/*
    RunAt - grey
*/
#include <iostream>
#include <vector>
using namespace std;

typedef int long long ll;
#define printnl(a) cout << a << "\n";

bool sameParity(ll a, ll b) {
    if (a>0 && b>0) return true;
    else if (a<0 && b<0) return true;
    else return false;
}

void solve() {
    ll n;
    cin >> n;

    vector<ll> v(n);
    for (auto &e : v) cin >> e;

    ll ans = 0;
    int i=0;
    while (i<n) {
        ll curr = v[i];
        int j = i;
        while (j<n && sameParity(curr,v[j])) {
            curr = max(curr,v[j]); j++;
        }
        ans += curr;
        i = j;
    }

    printnl(ans);
}


int main() {
    int tests = 1;
    cin >> tests;
    while (tests--) solve();
    return 0;
}