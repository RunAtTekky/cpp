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

    if (n%2 == 0) {
        for (int i=n; i>=1; i--) {
            cout << i << " ";
        }
        cout << endl;
    }
    else {
        cout << -1 << endl;
    }
}


int main() {
    func();
    
    return 0;
}