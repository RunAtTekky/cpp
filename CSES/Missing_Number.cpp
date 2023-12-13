#include <iostream>
using namespace std;

typedef int long long ll;

void solve() {
    ll n; cin >> n;

    ll ele; ll sum = 0;
    for (int i=1; i<=n-1; i++) {
        cin >> ele;
        sum += ele;
    }
    cout << ((n)*(n+1))/2 - sum << "\n";
}

int main() {
    solve();
}