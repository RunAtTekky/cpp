#include <iostream>
using namespace std;

int gcd(int a, int b) {
    int ans = 0;
    int smaller = (a<b) ? a : b;
    for (int i=2; i<=smaller; i++) {
        if (a%i == 0 && b%i == 0) {
            ans = i;
        }
    } 
    return ans;
}

int main() {
    int a,b;
    cin >> a >> b;

    cout << gcd(a,b);
}