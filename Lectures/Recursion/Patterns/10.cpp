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
void print(int n, string ch) {
    if (n == 0) return;
    print(n-1,ch);
    cout << ch;
}
void pattern(int n, int m) {
    if (n == 0) return;
    pattern(n-1,m+1);
    print(m," ");
    print(n,"* ");
    print(m," ");
    cout << "\n";
}

int main() {
    int n = 5;

    pattern(n,0);
}