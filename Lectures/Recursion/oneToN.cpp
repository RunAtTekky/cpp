#include <iostream>
using namespace std;

void oneToN(int n, int i) {
    if (n < i) return;
    cout << i << " ";
    i++;
    oneToN(n,i);

}


int main() {
    oneToN(8,1);
}