#include <iostream>
using namespace std;

// Trust the function

int sumOfDigits(int n) {
    return n ? n%10 + sumOfDigits(n/10)  : 0;

    // We can also write it like this
    // if (n == 0) return 0;
    // return sumOfDigits(n/10) + n%10;
}
void printLine(int n) {
    if (n == 0) return;
    printLine(n-1);
    cout << n;
}
void trianglePattern(int n) {
    if (n == 0) return;
    trianglePattern(n-1);
    printLine(n);
    cout << "\n";
}
void upDownTriangle(int n) {
    if (n == 0) return;
    printLine(n);
    cout << "\n";
    upDownTriangle(n-1);
}
void mixTriangle(int n) {
    if (n == 1) {
        printLine(1);
        cout << "\n";
        return;
    }
    printLine(n);
    cout << "\n";

    mixTriangle(n-1);

    printLine(n);
    cout << "\n";
}
// 0 1 1 2 3 5 8 13 21
// 1 2 3 4 5 6 7 8 9
int fibonacci(int n) {
    if (n==2) return 1;
    if (n==1) return 0;
    return fibonacci(n-1) + fibonacci(n-2);
}
int fibonacciMemo(int n) {
    int fibo[100];
    fibo[1] = 0;
    fibo[2] = 1;
    for (int i=3; i<=n; i++) {
        fibo[i] = fibo[i-1] + fibo[i-2];
    }
    return fibo[n];
}
bool isPalindrome(string s) {
    if (s.size() <= 1) return true;
    if (s[0] != s[s.size()-1]) return false;
    return isPalindrome(s.substr(1,s.size()-2));
}
int main() {
    // cout << sumOfDigits(456);
    // trianglePattern(5);
    // upDownTriangle(5);
    // mixTriangle(5);
    // cout << fibonacci(10) << "\n";
    // cout << fibonacciMemo(10);
    // cout << isPalindrome("siddis");
    // printLine(5);
}