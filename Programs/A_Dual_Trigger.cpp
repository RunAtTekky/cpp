#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

#define YES cout << "YES\n";
#define NO cout << "NO\n";

void solve() {
    int n;
    string s;
    cin >> n;
    cin >> s;

    int cnt = count(s.begin(), s.end(), '1');

    if (cnt&1) {
        NO; return;
    }

    if (cnt>=4) {
        YES; return;
    }

    if (cnt == 2) {
        for (int i=0; i+1<n; i++) {
            if (s[i] == '1' && s[i] == s[i+1]) {
                NO; return;
            }
        }
        YES; return;
    }

    YES;
}

int main() {
    int t=1;
    cin >> t;
    while (t--) solve();
}
