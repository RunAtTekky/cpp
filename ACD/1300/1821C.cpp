/*
    RunAt - grey
*/
#include <iostream>
#include <algorithm>
using namespace std;

#define p(a) cout << a << "\n";

void solve() {
    string s; cin >> s;

    int n = s.size();
    int ans = n;
    for (char c = 'a'; c <= 'z'; c++) {
        int i=0; int mx = 0;

        // This is to find the maximum difference b/w same character
        while (i<n) {
            while (i<n && s[i] == c) i++;   
            int cnt = 0;
            while (i<n && s[i] != c) {i++; cnt++;}
            mx = max(mx,cnt);
        }
        // Now we calculate the steps for that region.
        int res = 0;
        while (mx) {
            res++;
            mx /= 2;
        }
        // As we want the minimum steps
        ans = min(ans,res);
    }
    p(ans);
}


int main() {
    int tests = 1;
    cin >> tests;
    while (tests--) solve();
    return 0;
}