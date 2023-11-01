#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;


    for (int i=1; i<=2*n; i++) {
        int freq = (i>n) ? i-n : n+1-i;
        int spaces = (i>n) ? (2*n-i)*2 : (i-1)*2;

        for (int j=1; j<=freq; j++) {
            cout << '*';
        }
        for (int j=1; j<=spaces; j++) cout << ' ';
        for (int j=1; j<=freq; j++) {
            cout << '*';
        }
        cout << endl;
        
    }   
}