/*
    RunAt - grey
*/
#include <iostream>
using namespace std;

typedef int long long ll;
#define YES cout << "Yes" << "\n"
#define NO cout << "No" << "\n"

void solve() {
    ll n,x;
    cin >> n >> x;

    ll odd = 0;
    ll even = 0;

    for (int i=0; i<n; i++) {
        int ele; cin >> ele;
        if (ele&1) odd++;
    }
    even = n-odd;

    for (int i=1; i<=odd && i<=x; i+=2) {
        ll need = x-i;
        if (need <= even) {
            YES; return;
        }
    }
    NO;
}


int main() {
    int tests = 1;
    cin >> tests;
    while (tests--) solve();
    return 0;
}