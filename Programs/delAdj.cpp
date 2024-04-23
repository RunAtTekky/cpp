#include <iostream>
using namespace std;

#define YES cout << "YES\n";
#define NO cout << "NO\n";

void solve() {
    string s;
    char c;
    cin >> s;
    cin >> c;

    int n = s.size();
    for (int i=0; i<n; i+=2) {
        if (s[i] == c) {YES; return;}
    }
    NO;
}
int main() {
    int t;
    cin >> t;

    while (t--) {
        solve();
    }
}
