#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    for (int i=1; i<=n; i++) {
        int fSpace = (i>n/2) ? n-i-1 : i-2;
        int sSpace = (i>n/2) ? (i-n/2-1)*2 : (n/2-i)*2;

        if (i==1 || i== n) {
            cout << '*';
            for (int j=1; j<=fSpace; j++) cout << ' ';
            for (int j=1; j<=sSpace; j++) cout << ' ';
            cout << '*';
            for (int j=1; j<=fSpace; j++) cout << ' ';
        }
        else {
            cout << '*';
            for (int j=1; j<=fSpace; j++) cout << ' ';
            cout << '*';
            for (int j=1; j<=sSpace; j++) cout << ' ';
            cout << '*';
            for (int j=1; j<=fSpace; j++) cout << ' ';
            cout << '*';
        }
        cout << endl;
    }
    
}