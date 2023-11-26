/*
    RunAt - grey
*/
#include <iostream>
#include <set>
#include <map>
#include <climits>
#include <algorithm>
#include <numeric>
#include <vector>
#include <string>
using namespace std;

typedef int long long ll;
#define printnl(a) cout << a << "\n";
#define printab(a,b) cout << a << " " << b << "\n";

const int N = 100005;

void solve() {
    ll n, m;
    cin >> n >> m;

    vector<ll> houses(m);
    for (auto &h : houses) cin >> h;

    sort(houses.begin(), houses.end());

    vector<ll> uninfected;
    for (int i=1; i<m; i++) {
        ll diff = houses[i] - houses[i-1] - 1;
        uninfected.push_back(diff);
    }
    ll diff = (n-houses[m-1]) + houses[0] - 1;
    uninfected.push_back(diff);

    sort(uninfected.begin(), uninfected.end());

    ll time = 0;
    ll housesSaved = 0;

    // for (auto &r : uninfected) cout << r << " ";

    ll rangeSize = uninfected.size();
    for (int i = rangeSize-1; i>=0; i--) {
        ll currRange = uninfected[i] - 2*time;
        if (currRange > 0) {
            housesSaved += max(1LL,currRange - 1);
        }
        time+=2; // with each day passing, two houses in the range will reduce
    }
    // cout << "\n";

    // printnl(housesSaved);

    printnl(n-housesSaved);

}


int main() {
    int tests = 1;
    cin >> tests;
    while (tests--) solve();
    return 0;
}