#include <iostream>
using namespace std;

const int MOD = 1e9 + 7;

void solve() {
    int n; cin >> n;
    long long answer = 1;
    for (int i=1; i<=n; i++) {
        answer = (answer*2) % MOD;
    }
    cout << answer << "\n";
}

int main() {
    solve();
}