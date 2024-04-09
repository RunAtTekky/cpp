#include <cmath>
#include <iostream>
#include <string>
using namespace std;

#define ll long long

ll power(ll a, ll b) {
    ll res = 1;
    while (b>0) {
        if (b&1) {
            res *= a;
        }

        a *= a;

        b = b>>1;
    }
    return res;

}

void solve() {
    ll N; cin >> N;
    
    ll digits = 1, base = 9;

    while (N - base*digits > 0) {
        N -= digits*base;
        base *= 10;
        digits++;
    }

    ll index = N%digits;

    ll res = power(10, (digits-1)) + (N-1)/digits;

    if (index != 0) {
        res = res/power(10, (digits-index));
    }

    cout << res%10 << "\n" ;
    
}

int main() {
    int q; cin >> q;

    while (q--) {
        solve();
    }
}
