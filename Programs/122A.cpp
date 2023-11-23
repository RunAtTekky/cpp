/*
    RunAt - grey
*/
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

#define ll long long
#define printnl(a) cout << a << "\n";

void solve() {
    ll n;
    cin >> n;

    vector<int> luckyNumbers;
    luckyNumbers = {4,7,44,47,74,77,444,447,474,477,744,747,774,777};

    if (binary_search(luckyNumbers.begin(),luckyNumbers.end(),n)) {
        printnl("YES");
        return;
    }
    for (auto &i : luckyNumbers) {
        if (i>n) {
            printnl("NO");
            return;
        }
        if (n%i == 0) {
            printnl("YES");
            return;
        }
    }
    printnl("NO");

}


int main() {
    solve();
    return 0;
}