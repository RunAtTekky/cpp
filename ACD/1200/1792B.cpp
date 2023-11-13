#include <iostream>
using namespace std;

#define ll long long
#define printnl(a) cout << a << "\n";


void func() {

    int a1,a2,a3,a4;
    cin >> a1 >> a2 >> a3 >> a4;
    if (a1 == 0) {
        printnl(1);
        return;
    }
    else {
        int ans = a1 + min(a2,a3)*2 + min(a1+1,abs(a2-a3)+a4);
        printnl(ans);
        return;
    }
}


int main() {
    int tests;
    cin >> tests;
    
    while (tests--) {
        func();
    }
    
    return 0;
}