/*
    RunAt - grey
*/
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

#define ll long long
#define printnl(a) cout << a << "\n";

void solve() {
    ll n;
    cin >> n;

    vector<ll> piles(n);
    ll prev = 0;
    for (auto &i : piles) {
        
        cin >> i;
        i += prev;
        prev = i;

    } 

    ll m; cin >> m;
    vector<ll> juicyWorms(m);
    for (auto &i : juicyWorms) cin >> i;

    for (auto &t : juicyWorms) {
        auto index = lower_bound(piles.begin(),piles.end(),t) - piles.begin();
        printnl(index+1);
    }
}


int main() {
    solve();
    return 0;
}