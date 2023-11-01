#include <iostream>
#include <algorithm>
#include <numeric>
#include <string>
#include <vector>
using namespace std;

#define ll long long

int minOfThree(int a, int b, int c) {
    if (a<b) {
        if (a<c) return a;
        else return c;
    }
    else if (b<c) return b;
    else return c;
}

bool allEqual(int a, int b, int c) {
    if (a==b && b==c && c == a) return true;
    return false;
}
void func() {
    int a,b,c;
    cin >> a >> b >> c;

    int mini = minOfThree(a,b,c);

    int cnt=3;

    while (cnt--) {
        if (a>mini) {
            a = a-mini;
        } else if (b>mini) {
            b = b-mini;
        } else if (c>mini) {
            c = c-mini;
        }
        if (allEqual(a,b,c)) {
            cout << "YES" << endl;
            return;
        }
    }
    cout << "NO" << endl;
    return;
}


int main() {
    int t;
    cin >> t;
    
    while (t--) {
        func();
    }
    
    return 0;
}