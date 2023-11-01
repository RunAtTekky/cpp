#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    for (int i=1; i<=n; i++) {
        if (i==1 || i==n) {
            for (int j=1; j<=n-1; j++) cout << '*';
        }
        else {
            cout << '*';
            for (int j=1; j<=n-3; j++) cout << ' ';
            cout << '*';
        }
        cout << endl;
    }
    
}