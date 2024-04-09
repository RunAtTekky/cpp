#include <iostream>
using namespace std;

void f(int n, char from, char to, char sup) {
    if (n==0) return;
    
    f(n-1, from, sup, to);
    
    cout << from << " " << to << "\n";

    f(n-1, sup, to, from);
}

int main() {
    int n;
    cin >> n;

    cout << (1<<n)-1 << "\n";

    f(n, '1', '3', '2');
}
