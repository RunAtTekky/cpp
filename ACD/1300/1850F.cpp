/*
    RunAt - grey
*/
#include <iostream>
#include <vector>
using namespace std;

typedef int long long ll;
#define p(a) cout << a << "\n";

void solve() {
    ll n;
    cin >> n;

    int maxi = 0;
    vector<int> frgCnt(n+1);
    vector<int> cnt(n+1);

    for (int i=0; i<n; i++) {
        int d; cin >> d;
        if (d <= n) frgCnt[d]++;
    }


    for (int i=1; i<=n; i++) {
        if (frgCnt[i] == 0) continue;
        int frogs= frgCnt[i];
        for (int j=i; j<=n; j+=i) {
            cnt[j] += frogs;
            maxi = max(maxi,cnt[j]);
        }
    }

    p(maxi);
}


int main() {
    int tests = 1;
    cin >> tests;
    while (tests--) solve();
    return 0;
}