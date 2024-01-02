#include <iostream>
#include <vector>
using namespace std;

typedef int long long ll;
#define readV(vec) for (auto &e: vec) cin >> e;

void solve() {
    ll n, curr = 0, ans = 0;
    cin >> n;

    vector<ll> vec(n);
    readV(vec);
    curr = vec[0];
    for (int i=1; i<n; i++) {
        ll diff = curr - vec[i];
        (diff > 0) ? ans+=diff : curr=vec[i];
    }
    cout << ans << '\n';
}


int main() {solve();}