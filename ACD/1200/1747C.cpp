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

    vector<ll> game(n);
    for (auto &i : game) cin >> i;

    auto mini = min_element(game.begin(),game.end());

    /*
        If the first element is the minimum.
        Then Alice will have to reduce it.
        And Bob will keep choosing the minimum element.
        At one point the minimum element will decrease to 0.
        Then Bob will again put that at first place.
        Thus, he will win. 
    */
    if (*mini == game[0]) {
        printnl("Bob");
    }
    /*
        Another case is if the minimum element lies ahead of first element.
        In this case, Alice can keep choosing that minimum element
        and Bob will have to keep reducing it.
        Thus, Alice will win.
    */
    else {
        printnl("Alice");
    }
}


int main() {
    int tests = 1;
    cin >> tests;
    while (tests--) solve();
    return 0;
}