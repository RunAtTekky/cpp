/*
    RunAt - grey
*/
#include <iostream>
#include <map>
#include <vector>
using namespace std;

#define ll long long
#define printnl(a) cout << a << "\n";

void solve() {
    ll s,n;
    cin >> s >> n;

    map<ll,ll> mp; // {strength : totalBonus}
    for (int i=0; i<n; i++) {
        int st, bonus;
        cin >> st >> bonus;
        mp[st] += bonus;
    }

    ll currHealth = s;
    for (auto [x,y] : mp) {
        if (currHealth <= x) {
            printnl("NO"); return;
        }
        currHealth += y;
    }
    printnl("YES");
    return;
}


int main() {
    int tests = 1;
    while (tests--) solve();
    return 0;
}