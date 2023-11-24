/*
    RunAt - grey
*/
#include <iostream>
#include <vector>
using namespace std;

typedef int long long ll;
#define printnl(a) cout << a << "\n";

void solve() {
    ll n;
    cin >> n;

    vector<ll> liar(n);
    for (auto &i : liar) cin >> i;

    for (int liar_guess = 0; liar_guess<=n; liar_guess++) {
        ll actual_liar = 0;
        for (auto &i : liar) {
            if (i>liar_guess) {
                actual_liar++;
            }
        }
        if (liar_guess == actual_liar) {
            printnl(liar_guess); return;
        }
    }
    printnl(-1);


}


int main() {
    int tests = 1;
    cin >> tests;
    while (tests--) solve();
    return 0;
}