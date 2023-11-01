#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    for (int i=1; i<=2*n-1; i++) {
        int space = (i>n) ? i-n : n-i;
        int freq = (i>n) ? 2*n-i : i;
        
        for (int j=1; j<=space; j++) cout << ' ';
        for (int j=1; j<=freq; j++) {
            cout << "* ";
        }
        cout << endl;

    }
    
}