#include <iostream>
using namespace std;
void printName(int n) {
    if (n == 0) return;
    cout << "Varun" << "\n";
    n--;
    printName(n);
}
int main() {
    printName(3);
}