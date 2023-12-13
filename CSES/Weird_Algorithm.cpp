#include <iostream>
using namespace std;

void solve() {
    long long n;
    cin >> n;
    
    cout << n << " ";
    while (n != 1) {
        if ((n&1) == 1) n = 3*n + 1;
        else n /= 2;
        cout << n << " ";
    }
}


int main() {
    solve();
}