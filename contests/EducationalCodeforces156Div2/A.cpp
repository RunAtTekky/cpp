#include <iostream>
#include <algorithm>
#include <numeric>
#include <string>
#include <vector>
using namespace std;

#define ll long long

void func() {
    int n;
    cin >> n;

    if (n < 6) {
        cout << "NO" << endl;
        return;
    }
    int a = 1;
    int b = 2;
    int c = n-(3);
    while (b<c) {
        if (b%3 == 0) {
            b++;
            c--;
        }
        else if (c%3 == 0) {
            c--;
            b++;
        }

        else {
            cout << "YES" << endl;
            cout << a << " " << b << " " << c << endl;
            return;
        }
    }
    cout << "NO" << endl;
}


int main() {
    int t;
    cin >> t;
    
    while (t--) {
        func();
    }
    
    return 0;
}