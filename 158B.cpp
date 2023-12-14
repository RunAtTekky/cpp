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
    ans += a4;

    ll min1or3 = min(a1,a3);
    ans += min1or3;

    a1 -= min1or3;
    a3 -= min1or3;

    ans += a3;

    ans += a2/2;

    a2 = a2%2;

    if (a2 != 0) {
        a1 -= 2;
        a1 = max(a1,0LL);
        ans++;
    }

    ans += a1/4 + (a1%4 != 0);

    cout << ans << "\n";
}


int main() {
    solve();
}