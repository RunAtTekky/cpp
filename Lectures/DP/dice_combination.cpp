#include <iostream>
#include <vector>
using namespace std;

#define ll long long
const ll MOD = 1e9+7;


void solve() {
    ll n;
    cin >> n;

    vector<ll> dp(n+1);
    // dp[k] = number of ways to get a sum of k
    dp[0] = 1; // number of ways to get sum 0 is 1

    for (int i=1; i<=n; i++) {
        for (int j=1; j<=6 && i-j>=0; j++) {
            // Transition
            dp[i] = (dp[i] + dp[i-j]) % MOD;
        }
    }

    cout << dp[n] % MOD<< "\n";
}

int main() {
    solve();
}