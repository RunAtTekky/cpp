/*
    RunAt - grey
*/
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

typedef int long long ll;

void solve() {
    ll n;
    cin >> n;
    vector<pair<ll,ll>> vp(n+1);
    for (int i=1; i<=n; i++) {
        ll ele; cin >> ele;
        vp[i].first = ele;
        vp[i].second = i;
    }

    sort(vp.begin(), vp.end());

    vector<ll> res(n+1);
    int i=1;
    ll currScore = vp[1].first;
    while (i <= n) {
        int j = 1;
        if (currScore >= vp[i+1].first) {
            while (i + j <= n && currScore >= vp[i+j].first) {
                currScore += vp[i+j].first;
                j++;
            }
        }
        currScore += vp[i+j].first;
        for (int k=i; k<i+j; k++) {
            res[vp[k].second] = i+j-2;
        }
        i = i+j;
    }
    for (int i=1; i<=n; i++) {
        cout << res[i] << " ";
    }
    cout << "\n";

}


int main() {
    int tests = 1;
    cin >> tests;
    while (tests--) solve();
}