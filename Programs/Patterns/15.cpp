#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    for (int i=1; i<=2*n-1; i++) {
        int spaces = (i>n) ? i-n : n-i;
        int midSpaces = (i>n) ? (2*n-1-i-1)*2+1 : (i-1)*2 - 1;

        for (int j=1; j<=spaces; j++) cout << ' ';
        
        if (i==1) cout << '*';
        else if (i==2*n-1) {
            cout << '*';
        }
        else if (i!=1) {
            cout << '*';
            for (int j=1; j<=midSpaces; j++) {
                cout << ' ';
            }
            cout << '*';
        }

        for (int j=1; j<=spaces; j++) cout << ' ';
        cout << endl;
    }   
}