/*
    RunAt - grey
*/
#include <iostream>
#include <map>
#include <algorithm>
#include <vector>
using namespace std;

typedef int long long ll;
#define p2(a,b) cout << a << " " << b << "\n";

void solve() {
    ll n,m;
    cin >> n >> m;

    vector<vector<ll>> adj(n+1);
    for (int i=1; i<n; i++) {
        ll x,y;
        cin >> x >> y;

        adj[x].push_back(y);
        adj[y].push_back(x);
    }

    map<ll,ll> mp;
    ll cntLeaves = 0;
    for (auto v : adj) {
        ll sz = v.size();
        if (sz == 0) continue;
        mp[sz]++;
        if (sz == 1) cntLeaves++;
    }
    /*
        If there are only two sizes available.
        One will be 1, which will be leaf nodes.
        Another will be all the other vertices
        including the root.
        {
            1: x*y;
            y+1: x+1;
        }
    */
    if (mp.size() == 2) {
        for (auto [sz,count] : mp) {
            if (sz != 1) {
                p2(count-1,cntLeaves/(count-1));
                return;
            }
        }
    }
    /*
        In this case, we have sz = 1, x, y+1
        {
            1: x*y;
            x: 1;
            y+1: x;
        }
    */
    for (auto [sz,count] : mp) {
        if (count == 1) {
            p2(sz, cntLeaves/sz);
            return;
        }
    }
}


int main() {
    int tests = 1;
    cin >> tests;
    while (tests--) solve();
    return 0;
}