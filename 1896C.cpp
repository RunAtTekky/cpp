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

void solve() {
    ll n,x;
    cin >> n >> x;

    vector<ll> a(n);
    vector<ll> b(n);

    for (auto &i : a) cin >> i;
    for (auto &i : b) cin >> i;

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    vector<ll> a_copy = a;
    vector<ll> b_copy = b;

    ll mini = 0;
    for (auto &i : a) {
        auto it = lower_bound(b_copy.begin(),b_copy.end(),i) - b_copy.begin();
        if (it != n) {
            b_copy[it] = LLONG_MIN;
        } else {
            mini++;
        }
    }

    b_copy = b;
    ll maxi = 0;
    int i=n-1; int j=n-1;
    while (i>=0 && j>=0) {
        auto it = lower_bound(b_copy.begin(),b_copy.end(),a[i]) - b_copy.begin();
    }
}

int main() {
    int tests = 1;
    cin >> tests;
    while (tests--) solve();
    return 0;
}