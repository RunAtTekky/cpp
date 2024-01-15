/*
    RunAt - grey
*/
#include <iostream>
#include <set>
#include <cmath>
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
#define printV(vec) for (auto &e: vec) {cout << e << " ";} cout << "\n";
#define YES cout << "YES" << "\n"
#define NO cout << "NO" << "\n"

const int N = 100005;

void solve() {
    ll n,m;
    cin >> n >> m;

    vector<long long> vec(n);
    for (auto &e: vec) cin >> e;
    
    vector<long long> vec2(m);
    for (auto &e: vec2) cin >> e;

    sort(vec.begin(), vec.end());
    sort(vec2.begin(), vec2.end());

    reverse(vec2.begin(), vec2.begin() + n/2);
    reverse(vec2.begin() + m - n/2, vec2.begin() + m);

    // for (auto &e: vec) cout << e << " ";
    // cout << "\n";

    for (auto &e: vec2) cout << e << " ";
    cout << "\n";

    for (int i=0; i<n/2; i++) {
        swap(vec2[i],vec2[m-n/2+i]);
    }

    // for (auto &e: vec2) cout << e << " ";
    // cout << "\n";

    vec2.erase(vec2.begin()+ceil(double(n)/2), vec2.begin() + m - n/2);

    for (auto &e: vec2) cout << e << " ";
    cout << "\n";


    ll ans = 0;
    for (int i=0; i<n; i++) {
        ans += abs(vec[i]-vec2[i]);
    }
    p(ans);

    
    

    
    
}

int main() {
    int tests = 1;
    cin >> tests;
    while (tests--) solve();
    return 0;
}
