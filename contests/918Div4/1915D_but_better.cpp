/*
    RunAt - grey
*/
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

void solve() {
    int n;
    cin >> n;

    string s; cin >> s;

    reverse(s.begin(), s.end());

    int i = 0;

    string ans = "";
    while (i<n) {
        if (s[i] == 'a' || s[i] == 'e') {
            ans += s.substr(i,2);
            i+=2;
        }
        else {
            ans += s.substr(i,3);
            i+=3;
        }
        ans += '.';
    }

    ans.pop_back(); // remove the last '.'

    reverse(ans.begin(), ans.end());

    cout << ans << "\n";
}


int main() {
    int tests = 1;
    cin >> tests;
    while (tests--) solve();
    return 0;
}