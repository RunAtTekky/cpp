#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    for (int i=1; i<=n; i++) {
        int spaces = i-1;
        int midSpaces = (i!=1 && i!=n) ? (n-i)*2 - 1 : 0;

        for (int j=1; j<=spaces; j++) cout << ' ';

        if (i==1) {
            for (int j=1; j<=2*n-1; j++) {
                cout << '*';
            }
        }
        else if (i==n) cout << '*';
        else if (i!=1 && i!=n) {
            cout << '*';
            for (int j=1; j<=midSpaces; j++) cout << ' ';
            cout << '*';
        }
        for (int j=1; j<=spaces; j++) cout << ' ';
        cout << endl;
    }   
}