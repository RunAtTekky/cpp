#include <iostream>
#include <map>
#include <climits>
#include <algorithm>
#include <numeric>
#include <string>
#include <vector>
using namespace std;

#define ll long long
#define printnl(a) cout << a << "\n";
#define printab(a,b) cout << a << " " << b << "\n";

const int N = 100005;

int findIndexOfFirstMin(vector<int> v) {
    int n = v.size();
    int minInd = -1;
    int min = INT_MAX;
    for (int i=0; i<n; i++) {
        if (v[i] < min) {
            min = v[i];
            minInd = i;
        }
    }
    return minInd;
}

void solve() {
    ll n;
    cin >> n;

    vector<int> arr(n);
    for (int i=0; i<n; i++) cin >> arr[i];

    auto minIndex = findIndexOfFirstMin(arr);
    if (is_sorted(arr.begin() + minIndex + 1, arr.end())) {printnl(minIndex);}
    else printnl(-1);
}


int main() {
    int tests; cin >> tests;
    while (tests--) solve();
    return 0;
}