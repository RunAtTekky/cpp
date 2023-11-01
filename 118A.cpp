#include <iostream>
#include <climits>
#include <algorithm>
#include <numeric>
#include <string>
#include <vector>
using namespace std;

#define ll long long
#define printab(a,b) cout << a << b ;

string s;
char ch;

void func() {
    cin >> s;
    for (int i=0; i<s.size(); i++) {
        ch = tolower(s[i]);
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'y') {
            continue;
        }
        else {
            printab('.', ch);
        }
    }
}


int main() {
    int t;
    t=1;
    while (t--) {
        func();
    }
    
    return 0;
}