#include <iostream>
using namespace std;

void nToOne(int n) {
    if (n == 0) return;
    cout << n << " ";
    n--;
    nToOne(n);
}

int main() {
    nToOne(8);
}