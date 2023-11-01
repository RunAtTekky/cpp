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
    int curr = 1;
    int total = 0;
    for (int i=0; i<s.size(); i++) {
        if (s[i] != '0') {
            total += abs(s[i] - '0' - curr) + 1;
            curr = s[i]-'0';
        }
        else {
            total += (10-curr + 1);
            curr = 10;
        }
    }
    printnl(total);

}


int main() {
    int t;
    cin >> t;
    
    while (t--) {
        func();
    }
    
    return 0;
}