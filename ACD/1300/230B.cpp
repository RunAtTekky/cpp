/*
    RunAt - grey
*/
#include <iostream>
#include <set>
#include <cmath>
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

const int N = 1e6+1;

vector<bool> prime(N+1,true);


set<ll> squarePrimes() {
    prime[0] = false;
    prime[1] = false;
    for (int i=2; i*i<N; i++) {
        if (prime[i] == false) continue;
        for (int j=i*i; j<N; j+=i) {
            prime[j] = false;
        }
    }
    set<ll> s;
    for (int i=2; i<N; i++) {
        if (prime[i]) {
            ll y = (ll)i*i;
            s.insert(y);
        }
    }
    return s;
}

void solve() {
    set<ll> sqPrimes(squarePrimes());
    ll n;
    cin >> n;

    for (int i=0; i<n; i++) {
        ll x; cin >> x;

        if (sqPrimes.find(x) != sqPrimes.end()) {YES;}
        else {NO;}
    }
}


int main() {
    solve();
}