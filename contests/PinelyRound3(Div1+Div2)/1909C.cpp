/*
    RunAt - grey
*/
#include <iostream>
#include <set>
#include <map>
#include <climits>
#include <string>
#include <numeric>
#include <algorithm>
#include <vector>
using namespace std;

typedef int long long ll;
#define p(a) cout << a << "\n";
#define p2(a,b) cout << a << " " << b << "\n";
#define readV(vec) for (auto &e: vec) cin >> e;
#define debugV(vec) for (auto &e: vec) {cout << e << " ";} cout << "\n";
#define YES cout << "YES" << "\n"
#define NO cout << "NO" << "\n"

const int N = 100005;

void solve() {
    ll n;
    cin >> n;

    vector<pair<ll,ll>> a;

    for (int i=0; i<n; i++) {
        int ele; cin >> ele;
        a.push_back({ele,1});
    }
    for (int i=0; i<n; i++) {
        int ele; cin >> ele;
        a.push_back({ele,-1});
    }
    sort(a.begin(), a.end()); // based on the first value


    vector<ll> c(n);
    readV(c);
    sort(c.begin(), c.end(), greater<int>()); // sort in reverse

    vector<ll> diff, stk; // maintain a stack to create a difference vector

    for (auto [x,i] : a) {
        if (i==1) {
            stk.push_back(x);
        }
        else {
            if (!stk.empty()) {
                diff.push_back(x-stk.back());
                stk.pop_back();
            }
        }
    }
    sort(diff.begin(), diff.end());
    
    ll res = 0;
    for (int i=0; i<n; i++) {
        res += 1LL*c[i]*diff[i];
    }
    p(res);
    

}


int main() {
    int tests = 1;
    cin >> tests;
    while (tests--) solve();
    return 0;
}