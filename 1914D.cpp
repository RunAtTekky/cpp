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
#define YES cout << "YES" << "\n"
#define NO cout << "NO" << "\n"

const int N = 100005;

void solve() {
    ll n;
    cin >> n;
    vector<pair<ll,ll>> a(n);
    vector<pair<ll,ll>> b(n);
    vector<pair<ll,ll>> c(n);

    for (int i=0; i<n; i++) {
        ll ele; cin >> ele;
        a[i].first = ele;
        a[i].second = i;
    }

    for (int i=0; i<n; i++) {
        ll ele; cin >> ele;
        b[i].first = ele;
        b[i].second = i;
    }

    for (int i=0; i<n; i++) {
        ll ele; cin >> ele;
        c[i].first = ele;
        c[i].second = i;
    }

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    sort(c.begin(), c.end());

    vector<pair<pair<ll,ll>,ll>> minInd(3);
    minInd[0].first.first = a[n-1].first - a[n-2].first;
    minInd[0].second = 0;
    minInd[0].first.second = a[n-1].first - a[n-3].first;

    minInd[1].first.first = b[n-1].first - b[n-2].first;
    minInd[1].second = 1;
    minInd[1].first.second = b[n-1].first - b[n-3].first;

    minInd[2].first.first = c[n-1].first - c[n-2].first;
    minInd[2].second = 2;
    minInd[2].first.second = c[n-1].first - c[n-3].first;

    sort(minInd.begin(), minInd.end());

    for (auto pr: minInd) {
        cout << "(" << pr.first.first << " " << pr.first.second << ")" << " " << pr.second << "\n";
    }
}


int main() {
    int tests = 1;
    cin >> tests;
    while (tests--) solve();
    return 0;
}