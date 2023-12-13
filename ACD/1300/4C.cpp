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
#define printnl(a) cout << a << "\n";
#define printab(a,b) cout << a << " " << b << "\n";
#define readV(vec) for (auto &e: vec) cin >> e;
#define debugV(vec) for (auto &e: vec) {cout << e << " ";} cout << "\n";
#define YES cout << "YES" << "\n"
#define NO cout << "NO" << "\n"

const int N = 100005;

void solve() {
    ll n;
    cin >> n;

    map<string,ll> hm;

    for (int i=1; i<=n; i++) {
        string u_id; cin >> u_id;
        if (hm.count(u_id) == 0) {
            hm[u_id] = 1;
            printnl("OK");
        }
        else {
            cout << u_id << hm[u_id] << "\n";
            hm[u_id]++;
        }
    }
}


int main() {
    int tests = 1;
    // cin >> tests;
    while (tests--) solve();
    return 0;
}