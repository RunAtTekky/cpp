#include <iostream>
#include <map>
using namespace std;

#define ll long long


void func() {
    ll n,m;
    cin >> n;
    map<int,int> hm;
    // map = {val-index : count}
    ll ans = 0;
    for (int i=1; i<=n; i++) {
        cin >> m;
        ans += hm[m-i];
        // 1 6 3 4 5 6
        // 1 5 1 1 1 1
        // ans = 0, 0, 1, 3, 6, 10
        // if we have 3 count
        // use 1 + 2 = 6
        // do not use 3*2/2
        hm[m-i]++;
    }
    cout << ans << "\n";
}


int main() {
    int t;
    cin >> t;
    
    while (t--) {
        func();
    }
    
    return 0;
}