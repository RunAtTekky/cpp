#include <iostream>
using namespace std;

void func() {
    int x,y,k;
    cin >> x >> y >> k;

    cout << ((x>y) ? x : (y-x<=k) ? y : (x+k + 2*(y-(x+k)))) << "\n";
}


int main() {
    int t;
    cin >> t;
    
    while (t--) {
        func();
    }
    
    return 0;
}