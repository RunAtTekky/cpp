/*
    RunAt - grey
*/
#include <iostream>
#include <vector>
using namespace std;

typedef int long long ll;
#define p(a) cout << a << "\n";
#define YES cout << "YES" << "\n"
#define NO cout << "NO" << "\n"

void solve() {
    ll n,k;
    cin >> n >> k;

    if (n<k) {NO; return;}

    vector<ll> res(k);
    if (n%2==1 && k%2==0) {NO; return;}

    if (n%2==0 && k%2==1) {
        for (int i=0; i<k-1; i++) {
            res[i] = 2;
        }
        ll final = n - (k-1)*2;

        if (final <= 0 || final%2==1) {NO; return;}
        YES;

        res[k-1] = final;

        for (auto &e: res) cout << e << " ";
        cout << "\n";
    }
    else {
        for (int i=0; i<k-1; i++) {
            res[i] = 1;
        }
        ll final = n - (k-1);

        if (final <= 0 || final%2==0) {NO; return;}
        YES;
        res[k-1] = final;
        for (auto &e: res) cout << e << " ";
        cout << "\n";
    }
}

int main() {
    int tests = 1;
    cin >> tests;
    while (tests--) solve();
    return 0;
}
