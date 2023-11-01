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

    int pagesRead[7];
    for (int i=0; i<7; i++) {
        cin >> pagesRead[i];
    }

    int i=0;
    while (n>0) {
        n -= pagesRead[i];
        if (n<=0) {
            cout << i+1 << "\n";
            return;
        }
        if (i==6) i=0;
        else i++;
    }
}


int main() {
    int t;
    t = 1;
    
    while (t--) {
        func();
    }
    
    return 0;
}