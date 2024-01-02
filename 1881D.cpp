/*
    RunAt - grey
*/
#include <iostream>
#include <map>
#include <vector>
using namespace std;

typedef int long long ll;
#define YES cout << "YES" << "\n"
#define NO cout << "NO" << "\n"

void divisors (ll x, map<ll,ll> &mp) {
    int i=2;
    while (i*i<=x) {
        while (x%i==0) mp[i]++, x/=i;
        i++;
    }
    if (x>1) mp[x]++;
}

void solve() {
    ll n;
    cin >> n;

    vector<ll> vec(n);

    map<ll,ll> mp;
    for (int i=0; i<n; i++) {
        ll ele; cin >> ele;
        divisors(ele,mp);
    }

    for (auto [num,cnt] : mp) {
        if (cnt%n != 0) {NO; return;}
    }
    YES;

    
}


int main() {
    int tests = 1;
    cin >> tests;
    while (tests--) solve();
}