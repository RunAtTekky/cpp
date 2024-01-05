/*
    RunAt - grey
*/
#include <iostream>
#include <set>
#include <map>
#include <climits>
#include <string>
#include <numeric>
#include <algorithm>
#include <vector>
using namespace std;

typedef int long long ll;
#define p(a) cout << a << "\n";
#define p2(a,b) cout << a << " " << b << "\n";
#define readV(vec) for (auto &e: vec) cin >> e;
#define debugV(vec) for (auto &e: vec) {cout << e << " ";} cout << "\n";
#define YES cout << "Happy Alex" << "\n"
#define NO cout << "Poor Alex" << "\n"

const int N = 100005;

void solve() {
    ll n;
    cin >> n;

    vector<pair<ll,ll>> pr(n);

    for (int i=0; i<n; i++) {
        ll a,b; cin >> a >> b;
        pr[i].first = a;
        pr[i].second = b;
    }

    sort(pr.begin(), pr.end());

    for (int i=0; i<n-1; i++) {
        if (pr[i].second > pr[i+1].second && pr[i].first < pr[i+1].first) {YES; return;}
    }

    NO;


}

int main() {
    int tests = 1;
    // cin >> tests;
    while (tests--) solve();
    return 0;
}
