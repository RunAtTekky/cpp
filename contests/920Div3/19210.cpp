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
#define printV(vec) for (auto &e: vec) {cout << e << " ";} cout << "\n";
#define YES cout << "YES" << "\n"
#define NO cout << "NO" << "\n"

const int N = 100005;

void solve() {
    vector<int> x(4);
    vector<int> y(4);

    for (int i=0; i<4; i++) {
        cin >> x[i];
        cin >> y[i];
    }
    sort(x.begin(), x.end());
    sort(y.begin(), y.end());

    ll area = (x[3]-x[0]) * (y[3]-y[0]);

    p(abs(area));

}

int main() {
    int tests = 1;
    cin >> tests;
    while (tests--) solve();
    return 0;
}
