#include <iostream>
#include <algorithm>
#include <iomanip>
#include <vector>
using namespace std;

#define printnl(a) cout << a << "\n";

vector<double> readVector(double n) {
    vector<double> v(n);
    for (double i=0; i<n; i++) cin >> v[i];
    return v;
}

void solve() {
    double n,m;
    cin >> n >> m;
    vector<double> lanterns;
    lanterns = readVector(n);
    sort(lanterns.begin(), lanterns.end());

    double res = 0;
    for (int i=1; i<n; i++) {
        double diff = lanterns[i] - lanterns[i-1];
        res = max(diff,res);
    }
    double ans;
    ans = max(lanterns[0],m - lanterns[n-1]);
    ans = max(ans, res/2);
    cout << setprecision(15) << ans << "\n";
}


int main() {
    int tests;
    tests = 1;
    while (tests--) {
        solve();
    }
    
    return 0;
}