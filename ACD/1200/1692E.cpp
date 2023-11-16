#include <iostream>
#include <map>
#include <climits>
#include <algorithm>
#include <numeric>
#include <string>
#include <vector>
using namespace std;

#define ll long long
#define printnl(a) cout << a << "\n";

void solve() {
    ll n, sum;
    cin >> n >> sum;

    vector<ll> binaryDeque(n+1,0);
    for (int i=1; i<=n; i++) cin >> binaryDeque[i];

    vector<ll> prefixSum(n+1,0);
    for (int i=1; i<=n; i++) {
        prefixSum[i] = prefixSum[i-1] + binaryDeque[i];
    }

    if (prefixSum[n] < sum) {
        printnl(-1); return;
    }
    if (prefixSum[n] == sum) {
        printnl(0); return;
    }

    int i=1;
    ll minRemoval = LLONG_MAX;
    while (i<n) {
        if (i==1 || prefixSum[i] != prefixSum[i-1]) {
            auto upperIndex = upper_bound(prefixSum.begin(), prefixSum.end(), prefixSum[i] + sum) - prefixSum.begin() - 1;
            minRemoval = min(minRemoval, n-upperIndex + i);
        }
        i++;
    }
    vector<ll> postSum(n+2);
    for (int j=n; j>=1; j--) {
        postSum[j] = postSum[j+1] + binaryDeque[j];
    }
    ll toRemove = prefixSum[n] - sum;
    // ll pre = lower_bound(prefixSum.begin(),prefixSum.end(),toRemove) - prefixSum.begin();
    // ll post = lower_bound(postSum.begin(),postSum.end(),toRemove,greater<int>()) - postSum.begin();
    // minRemoval = min(minRemoval,pre);
    // minRemoval = min(minRemoval,n+1-post);
    for (ll j=1; j<=n; j++) {
        if (prefixSum[j] == toRemove) {
            minRemoval = min(minRemoval,j);
            break;
        }
    }
    for (ll j=n; j>=1; j--) {
        if (postSum[j] == toRemove) {
            minRemoval = min(minRemoval, n-j+1);
            break;
        }
    }
    printnl(minRemoval);
}


int main() {
    int tests;
    cin >> tests;
    
    while (tests--) {
        solve();
    }
    
    return 0;
}