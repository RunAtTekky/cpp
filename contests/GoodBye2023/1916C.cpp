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

ll weirdSum(ll a, ll b) {
    ll sum = ((a+b)&1) ? (a+b)-1 : a+b;
    return sum;
}

void solve() {
    ll n;
    cin >> n;

    vector<ll> arr(n);
    readV(arr);

    ll odd = 0;
    ll even = 0;

    bool masha = true;

    for (int i=0; i<n; i++) {
        if (masha) {
            if (arr[i]&1) {
                if (odd != 0) {
                    even += odd + arr[i];
                    odd = 0;
                    masha = false;
                }
                else {
                    odd += arr[i];
                }
            }
            else {
                even += arr[i];
            }
        }
        else {
            if (arr[i]&1) {
                even = weirdSum(even,arr[i]);
                masha = true;
            }
            else {
                even += arr[i];
            }
        }

        if (odd == 0 || even == 0) {
            cout << odd + even << " ";
        }
        else {cout << weirdSum(odd,even) << " ";}
    }
    cout << "\n";
    
}


int main() {
    int tests = 1;
    cin >> tests;
    while (tests--) solve();
}