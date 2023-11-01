#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    for (int i=1; i<=2*n-1; i++) {
        int spaces = (i>n) ? (i-n) : (n-i);
        int freq = (i>n) ? (2*n-1-i)*2 + 1 : (i-1)*2 + 1;

        for (int j=1; j<=spaces; j++) cout << ' ';

        if (i<=n) {
            for (int j=1; j<=freq; j++) {
                if (j<=freq/2) {
                    cout << i+1-j;
                } else {
                    cout << j-i+1;
                }
            }
        }
        else {
            for (int j=1; j<=freq; j++) {
                if (j<=freq/2) {
                    cout << 2*n-i+1-j;
                } else {
                    cout << j-(2*n-i)+1;
                }
            }            
        }
        
        

        for (int j=1; j<=spaces; j++) cout << ' ';
        cout << endl;

    }      
}