#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;
    for (int i=1; i<=n; i++) {
        int spaces = n-i;
        for (int j=1; j<=spaces; j++) cout << ' ';
        for (int j=1; j<=i; j++) cout << "* ";
        for (int j=1; j<=spaces; j++) cout << ' ';
        cout << endl;
    }
}