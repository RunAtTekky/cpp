#include <iostream>
#include <algorithm>
#include <numeric>
#include <cmath>
#include <string>
#include <vector>
using namespace std;

#define ll long long

void func() {
    int a1,a2,a3;
    cin >> a1 >> a2 >> a3;
    
    int a = int(sqrt((a1*a3)/a2));
    int b = int(sqrt((a1*a2)/a3));
    int c = int(sqrt((a2*a3)/a1));

    cout << 4*(a+b+c) << "\n";
    
}


int main() {
    int t;
    t = 1;
    
    while (t--) {
        func();
    }
    
    return 0;
}