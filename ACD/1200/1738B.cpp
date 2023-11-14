#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

#define ll long long
#define printnl(a) cout << a << "\n";

void solve() {
    int n,k;
    cin >> n >> k;

    vector<ll> s(n+1);
    for (int i=n-k+1; i<=n; i++) cin >> s[i];

    if (k==1) {
        printnl("Yes");
        return;
    }
    vector<ll> arr(n+1);
    for (int i=n-k+2; i<=n; i++) {
        arr[i] = s[i] - s[i-1];
    }
    if (!is_sorted(arr.begin()+n-k+2, arr.end())) {
        printnl("No");
        return;
    }
    // We are using (n-k+1) in multiplication coz
    // we have to consider what elements we will be
    // placing in the beginning n-k indexes
    // if we are taking same difference as arr[n-k+2]
    // Then for it to be possible
    // diff + diff + diff + ....... (n-k+1) times
    // Thus we have (n-k+1)*diff
    // which is (n-k+1)*arr[n-k+2]
    if (s[n-k+1] > arr[n-k+2]*(n-k+1)) {
        printnl("No");
        return;
    }
    printnl("Yes");
}


int main() {
    int tests;
    cin >> tests;
    
    while (tests--) {
        solve();
    }
    
    return 0;
}