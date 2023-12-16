/*
    RunAt - grey
*/
#include <iostream>
#include <cmath>
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
    vector<vector<ll>> adj(n+1);

    for (int i=0; i<n-1; i++) {
        ll a;
        ll b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    ll leaves = 0;
    for (int i=1; i<=n; i++) {
        if (adj[i].size() == 1) leaves++;
    }

    ll res = ceil((double)(leaves)/(double)(2));
    p(res);
}


int main() {
    int tests = 1;
    cin >> tests;
    while (tests--) solve();
    return 0;
}