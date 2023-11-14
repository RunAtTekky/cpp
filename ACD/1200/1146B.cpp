#include <iostream>
#include <string>
#include <vector>
using namespace std;

#define printnl(a) cout << a << "\n";



void solve() {
    string t;
    cin >> t;

    string s = "";
    int n = t.size();
    for (int i=0; i<n; i++) {
        int m = s.size();
        if (n == i+m) {
            if (s == t.substr(i,m)) {
                printnl(t.substr(0,i));
                return;
            }
        }
        if (t[i] != 'a') s += t[i];
    }
    if (s == "") {
        printnl(t);
    } else {
        printnl(":(");
    }
}


int main() {
    int tests;
    tests = 1;
    while (tests--) {
        solve();
    }
    
    return 0;
}