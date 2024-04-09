#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

#define ll long long

int n;
vector<ll> vec(25,0);

ll solve(ll i, ll f, ll s) {
    if (i==n) return abs(f-s);

    return min(solve(i+1, f+vec[i], s), solve(i+1, f, s+vec[i]));

}

int main() {
    cin >> n;
    for (auto &e : vec) cin >> e;

    cout << solve(0, 0, 0);
}
