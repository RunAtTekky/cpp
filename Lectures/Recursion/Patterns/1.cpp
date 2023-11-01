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
void pattern(int n, int c) {
    if (n==0) return;
    printnStars(c);
    cout << "\n";
    pattern(n-1,c);
    // I had to use another argument here.
    // Find a way to do this question without using any other argument or any loop.

}

int main() {
    int n = 5;

    pattern(n,n);
}