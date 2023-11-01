#include <iostream>
#include <climits>
#include <algorithm>
#include <numeric>
#include <string>
#include <vector>
using namespace std;

#define ll long long
#define printnl(a) cout << a << "\n";
#define print(a,b) cout << a << " " << b << "\n";

void func() {
    string s;
    cin >> s;
    int pass[4];
    for (int i=0; i<4; i++) {
        if (s[i]!= '0') pass[i] = s[i] - '0';
        else pass[i] = 10;
    }
    int ans = (abs(pass[0]-1) + abs(pass[1]-pass[0]) + abs(pass[2]-pass[1]) + abs(pass[3]-pass[2]) + 4);
    cout << ans << "\n";
    
}


int main() {
    int t;
    cin >> t;
    
    while (t--) {
        func();
    }
    
    return 0;
}