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
void print(int n, string s) {
    if (n == 0) return;
    print(n-1,s);
    cout << s;
}
void pattern(int n) {

}

int main() {
    int n = 5;

    pattern(n);
}