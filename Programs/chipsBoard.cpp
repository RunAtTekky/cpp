#include <iostream>
#include <numeric>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
const long long N = 200005;
int a[N];
#define ll long long

int getMin(vector<ll> v, int n) {
    ll res = 2147483647L;
    for (auto num : v) {
        res = min(res,num);
    }
    return res;
}

void func(){
    ll n;
    cin >> n;

    vector<ll> a(n);
    for (ll i=0; i<n; i++) {
        cin >> a[i];
    }
    vector<ll> b(n);
    for (ll i=0; i<n; i++) {
        cin >> b[i];
    }

    ll minA = *min_element(a.begin(),a.end());
    ll minB = *min_element(b.begin(),b.end());

    ll sumA = accumulate(a.begin(),a.end(), 0LL);
    ll sumB = accumulate(b.begin(),b.end(), 0LL);

    ll ans = min(minA*n + sumB, minB*n + sumA);

    cout << ans << endl;
    
}

// Main
int main() {
    int t;
    cin >> t;
    
    while (t--) {
        func();
    }
    
    return 0;
}