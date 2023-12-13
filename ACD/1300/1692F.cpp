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
#define printnl(a) cout << a << "\n";
#define printab(a,b) cout << a << " " << b << "\n";
#define readV(vec) for (auto &e: vec) cin >> e;
#define debugV(vec) for (auto &e: vec) {cout << e << " ";} cout << "\n";
#define YES cout << "YES" << "\n"
#define NO cout << "NO" << "\n"

const int N = 100005;

bool is3Sum(vector<ll> &arr, ll target) {

    ll n = arr.size();
    for (int i=0; i<=n-3; i++) {
        int l = i+1; int r = n-1;

        while (l<r) {
            ll sum = arr[i] + arr[l] + arr[r];
            if (sum == target) {
                return true;
            }
            (sum < target) ? l++ : r--;
        }
    }
    return false;
}

void solve() {
    ll n;
    cin >> n;

    ll dis[10] = {0}; // holds distinct values {val : count}

    for (int i=0; i<n; i++) {
        int ele; cin >> ele;
        ele = ele%10;
        if (dis[ele] < 3) dis[ele]++;
        // printnl(dis[arr[i]]);
    }
    vector<ll> v;
    for (int i=0; i<10; i++ ) {
        for (int j = 0; j<dis[i]; j++) {
            v.push_back(i);
        }
    }
    // debugV(v);
    if (is3Sum(v,3)) {YES; return;}
    if (is3Sum(v,13)) {YES; return;}
    if (is3Sum(v,23)) {YES; return;}
    NO;
}


int main() {
    int tests = 1;
    cin >> tests;
    while (tests--) solve();
    return 0;
}