#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    for (int i=1; i<=n; i++) {
        int fSpace = n-i;
        int sSpace = n-2;

        if (i==1 || i==n) {
            for (int j=1; j<=fSpace; j++) cout << ' ';
            for (int j=1; j<=n; j++) cout << '*';
        }
        else {
            for (int j=1; j<=fSpace; j++) cout << ' ';
            cout << '*';
            for (int j=1; j<=sSpace; j++) cout << ' ';
            cout << '*';
        }
        cout << endl;
        
        
    }
    
}