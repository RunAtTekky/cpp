/*
    RunAt - grey
*/
#include <iostream>
#include <set>
#include <map>
#include <cmath>
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

    vector<ll> arr(n);
    readV(arr);

    vector<ll> odd;
    vector<ll> even;
    ll nums = ceil((double)n/2);
    vector<ll> oddSum(nums);
    vector<ll> evenSum(n/2);

    for (int i=0; i<n; i+=2) odd.push_back(arr[i]);
    for (int i=1; i<n; i+=2) even.push_back(arr[i]);

    partial_sum(odd.begin(), odd.end(), oddSum.begin());
    partial_sum(even.begin(), even.end(), evenSum.begin());

    // debugV(oddSum);
    // debugV(evenSum);
    int so = 0; int se = 0;
    int eo = oddSum.size()-1; int ee = evenSum.size()-1;

    // Go left side
    while (so<eo || se<ee) {
        ll oddDiff = oddSum[eo] - oddSum[so];
        ll evenDiff = evenSum[ee] - evenSum[se];

        if (oddDiff == evenDiff) {
            YES; return;
        }
        else if (oddDiff < evenDiff) {
            if ((evenDiff - even[se+1] == oddDiff) || (evenDiff - even[ee] == oddDiff)) {YES; return;}
        }
        else if (oddDiff > evenDiff) {
            if ((oddDiff - odd[so+1] == evenDiff) || (oddDiff - odd[eo] == evenDiff)) {YES; return;}
        }
        eo--;
        ee--;
    }

    so = 0; se = 0;
    eo = oddSum.size()-1; ee = evenSum.size()-1;
    // Go right side
    while (so<eo || se<ee) {
        ll oddDiff = oddSum[eo] - oddSum[so];
        ll evenDiff = evenSum[ee] - evenSum[se];

        if (oddDiff == evenDiff) {
            YES; return;
        }
        else if (oddDiff < evenDiff) {
            if ((evenDiff - even[se+1] == oddDiff) || (evenDiff - even[ee] == oddDiff)) {YES; return;}
        }
        else if (oddDiff > evenDiff) {
            if ((oddDiff - odd[so+1] == evenDiff) || (oddDiff - odd[eo] == evenDiff)) {YES; return;}
        }
        so++;
        se++;
    }
    NO;
    
}


int main() {
    int tests = 1;
    cin >> tests;
    while (tests--) solve();
    return 0;
}