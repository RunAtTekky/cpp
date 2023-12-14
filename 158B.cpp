/*
    RunAt - grey
*/
#include <iostream>
using namespace std;

typedef int long long ll;

void solve() {
    ll n;
    cin >> n;

    ll arr[5] = {0};
    for (int i = 0; i<n; i++) {
        int ele; cin >> ele;
        arr[ele]++;
    }

    ll a1 = arr[1];
    ll a2 = arr[2];
    ll a3 = arr[3];
    ll a4 = arr[4];

    ll ans = 0;
    
    ans += a4; // Obv all 4 ones should be added separately

    ans += a3; // Take all 3's
    a1 -= min(a1,a3); // Now a1 will be this

    ans += a2/2; // All 2's must be added divided by 2

    // If any 2 is still left
    if (a2&1) {
        a1 = max(a1-2,0LL); // Two 1's will be removed and we take only positive elements
        ans++;
    }

    // Now add the remaining 1's
    ans += a1/4 + (a1%4 != 0);

    cout << ans << "\n";
}


int main() {
    solve();
}