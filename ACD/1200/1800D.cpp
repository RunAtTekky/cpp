#include <iostream>
#include <string>
#include <vector>
using namespace std;

#define ll long long
#define printnl(a) cout << a << "\n";



void solve() {
    int n; string s;
    cin >> n; cin >> s;

    int cnt = 0;
    for (int i=1; i<n-1; i++) {
        if (s[i-1] == s[i+1]) cnt++;
    }
    printnl(n-1-cnt);
}


int main() {
    int tests;
    cin >> tests;
    
    while (tests--) {
        solve();
    }
    
    return 0;
}