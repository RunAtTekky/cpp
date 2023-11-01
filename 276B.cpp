#include <iostream>
#include <climits>
#include <algorithm>
#include <numeric>
#include <string>
#include <vector>
using namespace std;

#define ll long long
#define printnl(a) cout << a << "\n";
#define printab(a,b) cout << a << " " << b << "\n";

void func() {
    string s;
    cin >> s;

    int alpha[26] = {0};
    for (int i=0; i<s.size(); i++) {
        alpha[s[i]-'a']++;
    }
    int odd = 0;
    int even = 0;
    for (int i=0; i<26; i++) {
        if (alpha[i]%2 == 1) odd++;
    }
    // cout << "HEY";
    // cout << odd << "\n";
    if (odd == 1) {
        cout << "First" << "\n";
    }
    else cout << "Second" << "\n";
}


int main() {
    int t;
    t=1;
    while (t--) {
        func();
    }
    
    return 0;
}