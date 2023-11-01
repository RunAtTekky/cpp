#include <iostream>
using namespace std;


int func(int q, int m) {
    int t = 240-m;
    int tElapsed = 0;
    int i = 1;
    while (tElapsed + i*5 <= t && i<=q) {
        tElapsed += i*5;
        i++;
    }
    return i-1;
    
}

int main() {
    int q, m;
    cin >> q >> m;
    // int q = 4;
    // int m = 190;

    int ques = func(q,m);

    cout << ques;
    return 0;
}