#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    for (int i=1; i<=n; i++) {
        
        int dig = i%2;
        for (int j=1; j<=i; j++) {
            cout << dig << ' ';
            if (dig==0) dig = 1;
            else dig = 0;
        }
        cout << endl;
    
    }
    
}