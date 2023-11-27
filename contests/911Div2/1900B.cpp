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
    ll a,b,c;
    cin >> a >> b >> c;

    bool isA = false;
    bool isB = false;
    bool isC = false;

    if (abs(b-c)%2 == 0) isA = true;
    if (abs(a-c)%2 == 0) isB = true;
    if (abs(b-a)%2 == 0) isC = true;

    cout << isA << " " << isB << " " << isC << "\n";
}


int main() {
    int tests = 1;
    cin >> tests;
    while (tests--) solve();
    return 0;
}