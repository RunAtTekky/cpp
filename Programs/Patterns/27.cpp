#include <iostream>
using namespace std;

int sumN(int n) {
    return ((n)*(n+1));
}

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;
    int cnt = 1;
    int cnt2 = 1;
    for (int i=1; i<=n; i++) {
        int spaces = i-1;
        for (int j=1; j<=spaces; j++) cout << " ";

        for (int j=1; j<=n+1-i; j++) {
            cout << cnt << " ";
            cnt++;
        }
        cnt2 = cnt + sumN(n-i);
        for (int j=1; j<=n+1-i; j++) {
            cout << cnt2 << " ";
            cnt2++;
        }
        cout << endl;
    }


    
}