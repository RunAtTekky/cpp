#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    for (int i=1; i<=n; i++) {
        for (int j=1; j<=n+1-i; j++) {
            char ch = 'A' + 1 + (n-i-j);
            cout << ch;
        }
        cout << endl;
    }
    
}