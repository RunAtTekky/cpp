#include <iostream>
#include <algorithm>
#include <numeric>
#include <string>
#include <vector>
using namespace std;

#define ll long long
#define printnl(a) cout << a << "\n";

void func() {
    int n;
    cin >> n;
    string operation;
    int ans = 0;
    while (n--) {
        cin >> operation;
        if (operation[0] == '+' || operation[2] == '+') {
            ans++;
        }
        else ans--;
    } 
    printnl(ans);
}


int main() {
    int t;
    t=1;
    while (t--) {
        func();
    }
    
    return 0;
}