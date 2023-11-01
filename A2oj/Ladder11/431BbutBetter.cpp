#include <iostream>
#include <set>
#include <climits>
#include <algorithm>
#include <numeric>
#include <string>
#include <vector>
using namespace std;

#define ll long long
#define printnl(a) cout << a << "\n";
#define printab(a,b) cout << a << " " << b << "\n";

int h[6][6];
void func() {
    for (int i=1; i<=5; i++) {
        for (int j=1; j<=5; j++) {
            cin >> h[i][j];
        }
    }
    int p[5] = {1,2,3,4,5};
    ll maxi = 0;
    do {
        ll happyness = h[p[1]][p[0]] + h[p[0]][p[1]] + h[p[2]][p[1]] + h[p[1]][p[2]] + 2*h[p[4]][p[3]] + 2*h[p[3]][p[4]] + 2*h[p[3]][p[2]] + 2*h[p[2]][p[3]];
        if (happyness>maxi) maxi = happyness;
    } while (next_permutation(p,p+5));
    printnl(maxi);

}


int main() {
    int t;
    t=1;
    while (t--) {
        func();
    }
    
    return 0;
}