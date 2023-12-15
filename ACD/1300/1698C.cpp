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
#define all(v) v.begin(), v.end()
#define YES cout << "YES" << "\n"
#define NO cout << "NO" << "\n"

const int N = 100005;

bool isIn(vector<ll> v, ll sum) {
    for (int f=0; f<v.size(); f++) {
        if (v[f] == sum) return true;
    }
    return false;
}

void solve() {
    ll n;
    cin >> n;

    vector<ll> arr;

    ll cntP = 0;
    ll cntN = 0;
    ll cntZ = 0;

    for (int i=0; i<n; i++) {
        ll ele; cin >> ele;
        if (ele > 0) {cntP++; arr.push_back(ele);}
        else if (ele < 0) {cntN++; arr.push_back(ele);}
        else {
            cntZ++;
            if (cntZ <= 2) arr.push_back(ele);
        }
    }

    if (cntP >= 3 || cntN >= 3) {NO; return;}

    ll m = arr.size();

    for (int i=0; i<m; i++) {
        for (int j=i+1; j<m; j++) {
            for (int k=j+1; k<m; k++) {
                ll sum = arr[i] + arr[j] + arr[k];
                if (find(arr.begin(), arr.end(), sum) == arr.end()) {NO; return;}
            }
        }
    }
    YES;
}


int main() {
    int tests = 1;
    cin >> tests;
    while (tests--) solve();
    return 0;
}