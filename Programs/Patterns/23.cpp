#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    for (int i=1; i<=n; i++) {
        int firstSpace = n-i;
        int secondSpace = (i-1)*2-1;
        int thirdSpace = (n-1)*2-1 - (i-1)*2;

        if (i==1) {
            for (int j=1; j<=firstSpace; j++) cout << ' ';
            cout << '*';        
            for (int j=1; j<=secondSpace; j++) cout << ' ';

            for (int j=1; j<=thirdSpace; j++) cout << ' ';
            cout << '*';
            for (int j=1; j<=secondSpace; j++) cout << ' ';
        }
        else if (i==n) {
            for (int j=1; j<=firstSpace; j++) cout << ' ';
            cout << '*';
            for (int j=1; j<=secondSpace; j++) cout << ' ';
            cout << '*';
            for (int j=1; j<=thirdSpace; j++) cout << ' ';

            for (int j=1; j<=secondSpace; j++) cout << ' ';
            cout << '*';
        }
        else {
            for (int j=1; j<=firstSpace; j++) cout << ' ';
            cout << '*';
            for (int j=1; j<=secondSpace; j++) cout << ' ';
            cout << '*';
            for (int j=1; j<=thirdSpace; j++) cout << ' ';
            cout << '*';
            for (int j=1; j<=secondSpace; j++) cout << ' ';
            cout << '*';
        }
        cout << endl;
    }
    
}