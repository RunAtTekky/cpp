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

int t,sx,sy,ex,ey;
char ch;
int dir[26];

void func() {
    cin >> t >> sx >> sy >> ex >> ey;

    if (ex>sx) dir['E'-'A'] = ex-sx;
    else dir['W'-'A'] = sx-ex;

    if (ey>sy) dir['N'-'A'] = ey-sy;
    else dir['S'-'A'] = sy-ey;
    // printnl(sx-ex);
    // printnl(ey-sy);
    for (int i=1; i<=t; i++) {
        cin >> ch;
        if (dir[ch-'A'] != 0) dir[ch-'A']--;
        if (dir['E'-'A'] == 0 && dir['W'-'A'] == 0 && dir['N'-'A'] == 0 && dir['S'-'A'] == 0) {
            printnl(i);
            return;
        }
    }
    printnl(-1);
}


int main() {
    int t;
    t=1;
    while (t--) {
        func();
    }
    
    return 0;
}