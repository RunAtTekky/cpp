#include <iostream>
#include <numeric>
#include <string>
#include <vector>
using namespace std;

#define ll long long

void solve() {
    int n; string s;
    cin >> n;
    cin >> s;
    vector<bool> t(n+1);
    for (int i=1; i<=n; i++) {
        t[i] = (s[i-1] == '1');
    }
    vector<ll> costs(n+1,0);
    for (int i=1; i<=n; i++) {
        if (t[i] == 0) {
            for (int j=i; j<=n && t[j] == 0; j+=i) {
                if (costs[j] == 0) costs[j] = i;
            }
        }
    }
    cout << accumulate(costs.begin(),costs.end(),0LL) << "\n";
}


int main() {
    int tests;
    cin >> tests;
    
    while (tests--) {
        solve();
    }
    
    return 0;
}