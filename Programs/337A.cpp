/*
    RunAt - grey
*/
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

typedef int long long ll;
#define printnl(a) cout << a << "\n";

void solve() {
    ll n, m;
    cin >> n >> m;

    vector<ll> puzzles(m);
    for (auto &i : puzzles) cin >> i;

    sort(puzzles.begin(),puzzles.end());

    ll mini = INT_MAX;
    for (int i=0; i<=m-n; i++) {
        mini = min(mini,puzzles[i+n-1] - puzzles[i]);
    }
    printnl(mini);
}


int main() {
    solve();
}