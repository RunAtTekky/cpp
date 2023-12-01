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

void solve() {
    ll n;
    cin >> n;

    vector<ll> arr(n);
    readV(arr);

    ll maxSum = 0;
    ll curr = 0;

    for (int i=n-1; i>0; i--) {
        curr += arr[i];
        if (curr > 0) maxSum += curr;
    }
    // If by the end of the loop, curr is still negative
    // We will get some value in maxSum
    maxSum += arr[0] + curr;
    printnl(maxSum);

    
}


int main() {
    int tests = 1;
    cin >> tests;
    while (tests--) solve();
    return 0;
}