#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;
    int cnt = 1;
    for (int i=1; i<=n; i++) {
        for (int j=1; j<=i; j++) {
            if (cnt%2==1) {
                char ch = 'a' + cnt - 1;
                cout << ch;
                cnt++;
            } else {
                char ch = 'A' + cnt-1;
                cout << ch;
                cnt++;
            }
            
        }
        cout << endl;
    }
    
}