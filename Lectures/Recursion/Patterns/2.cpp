#include <iostream>
using namespace std;

void printLine(int n) {
    if (n == 0) return;
    printLine(n-1);
    cout << n;
}
void printnStars(int n) {
    if (n == 0) return;
    printnStars(n-1);
    cout << '*';
}
void pattern(int n) {
    if (n==0) return;
    pattern(n-1);
    printnStars(n);
    cout << "\n";
}

int main() {
    int n = 5;

    pattern(n);
}