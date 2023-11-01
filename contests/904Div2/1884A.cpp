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

ll getSumOfDigit(ll x) {
    ll sum = 0;
    while (x>0) {
        sum += x%10;
        x = x/10;
    }
    return sum;
}
void func() {
    ll x,k;
    cin >> x >> k;

    //solve

    while (getSumOfDigit(x)%k != 0) {
        x++;
    }
    printnl(x);
    

}


int main() {
    int t;
    cin >> t;
    
    while (t--) {
        func();
    }
    
    return 0;
}