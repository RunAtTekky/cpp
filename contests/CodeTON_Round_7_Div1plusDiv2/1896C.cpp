/*
    RunAt - grey
*/
#include <iostream>
#include <algorithm>
#include <numeric>
#include <vector>
using namespace std;

typedef int long long ll;
#define printnl(a) cout << a << "\n";
#define printab(a,b) cout << a << " " << b << "\n";

const int N = 100005;

void solve() {
    ll n,x;
    cin >> n >> x;

    vector<ll> a(n);
    vector<ll> b(n);

    for (auto &i : a) cin >> i;
    for (auto &i : b) cin >> i;

    vector<ll> aid(n);
    iota(aid.begin(),aid.end(),0);

    sort(aid.begin(), aid.end(), [&] (int l, int r) {
                return a[l] < a[r];
                });

    // for (auto &e : a) cout << e << " ";
    // cout << "\n";
    // for (auto &e : b) cout << e << " ";
    // cout << "\n";
    // for (auto &e : aid) cout << e << " ";
    // cout << "\n";

    sort(b.begin(), b.end());
    // for (auto &e : b) cout << e << " ";
    // cout << "\n";
    vector<ll> ans(n);
    for (int i=0; i<x; i++) {
        ans[aid[n-x+i]] = b[i];
    }
    for (int i=x; i<n; i++) {
        ans[aid[i-x]] = b[i];
    }

    for (int i=0; i<n; i++) {
        x -= a[i] > ans[i];
    }

    if (x==0) {
        printnl("YES");
        for (auto &i : ans) cout << i << " ";
        cout << "\n";
    } else {
        cout << "NO\n";
    }
}


int main() {
    int tests = 1;
    cin >> tests;
    while (tests--) solve();
    return 0;
}