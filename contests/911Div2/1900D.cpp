/*
    RunAt - grey
*/
#include <iostream>
#include <set>
#include <map>
#include <climits>
#include <algorithm>
#include <numeric>
#include <vector>
#include <string>
using namespace std;

typedef int long long ll;
#define printnl(a) cout << a << "\n";
#define printab(a,b) cout << a << " " << b << "\n";

const int N = 100005;


ll getGCDofMins(vector<ll> vec, int i, int j, int k) {
    vector<ll> l = {i,j,k};
    sort(l.begin(),l.end());
    return std::gcd(l[0],l[1]);
}

void solve() {
    ll n;
    cin >> n;

    vector<ll> v(n);
    for (auto &e : v) cin >> e;

    ll ans = 0;
    for (int i=0; i<n; i++) {
        for (int j=i+1; j<n; j++) {
            for (int k=j+1; k<n; k++) {
                ans += getGCDofMins(v,i,j,k);
            }
        }
    }
    printnl(ans);
}


int main() {
    int tests = 1;
    cin >> tests;
    while (tests--) solve();
    return 0;
}