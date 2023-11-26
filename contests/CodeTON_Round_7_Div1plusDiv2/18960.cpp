/*
    RunAt - grey
*/
#include <iostream>
#include <set>
#include <map>
#include <climits>
#include <algorithm>
#include <numeric>
#include <vector>
#include <string>
using namespace std;

typedef int long long ll;
#define printnl(a) cout << a << "\n";
#define printab(a,b) cout << a << " " << b << "\n";

const int N = 100005;

void solve() {
    ll n;
    cin >> n;

    vector<int> v(n);
    for (auto &i : v) cin >> i;

    if (is_sorted(v.begin(), v.end())) {
        printnl("YES");
        return;
    }

    for (int j=1; j<=10; j++) {
        for (int i=1; i<=n-2; i++) {

            if (v[i]>v[i-1] && v[i] > v[i+1]) {
                swap(v[i],v[i+1]);
            }
            
            if (is_sorted(v.begin(), v.end())) {
                printnl("YES");
                return;
            }
        }
    }

    printnl("NO");

}


int main() {
    int tests = 1;
    cin >> tests;
    while (tests--) solve();
    return 0;
}