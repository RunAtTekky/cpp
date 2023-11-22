#include <iostream>
#include <string>
#include <vector>
using namespace std;

#define ll long long
#define printnl(a) cout << a << "\n";

void solve() {
    ll k; cin >> k;

    string s; cin >> s;

    ll alpha[26] = {0};

    for (auto &c : s) alpha[c-'a']++;

    string ans;
    for (int i=0; i<26; i++) {
        if (alpha[i]%k!=0) {printnl(-1); return;}
        if (alpha[i] != 0) {
            ll freq = alpha[i]/k;
            while (freq--) ans += (char(i+'a'));
        }
    }
    for (int l=0; l<k; l++) cout << ans; 
}


int main() {
    solve();
    return 0;
}