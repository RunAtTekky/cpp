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

ll n,a,b,c;
map<int,int> dp;

int rec(ll n) {
    if (n<0) return INT_MIN;
    if (n == 0) return 0;

    if (dp[n] != 0) return dp[n];

    int res = max(rec(n-a), max(rec(n-b),rec(n-c))) + 1;

    dp[n] = res;
    return dp[n];
}

void solve() {
    cin >> n >> a >> b >> c;
    cout << rec(n) << "\n";
}


int main() {
    solve();
}