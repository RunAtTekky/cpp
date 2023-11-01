#include <iostream>
using namespace std;
int main() {
    int n; cin >> n;
    cout << ((n<4) ? "NO" : (n%2==1) ? "NO" : "YES");
}