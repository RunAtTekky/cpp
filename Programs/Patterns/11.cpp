#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;
    for (int i=1; i<=n; i++) {
        int spaces = i-1;
        for (int j=1; j<=spaces; j++) cout << ' ';
        for (int j=n+1-i; j>=1; j--) cout << "* ";
        for (int j=1; j<=spaces; j++) cout << ' ';
        cout << endl;
    }   
}