#include <iostream>
using namespace std;

void solve() {
    long long n;
    cin >> n;


    // 1 2 3 = 6
    if (n<6) {
        cout << "NO" << endl;
        return;
    }

    long long a = 1;
    long long b = 2;
    long long c = n-(3);

    // n = 15  a=1 b=2 c=12

    while (b<c) {
        if (b%3 == 0 || c%3 == 0) {
            b++;
            c--;
        }
        else {
            cout << "YES" << endl;
            cout << a << " " << b << " " << c << endl;
            return;
        }
    }
    cout << "NO" << endl;
    return;



}

int main() {
    int t;
    cin >> t;

    while (t--) {
        solve();
    }
    

    return 0;
}