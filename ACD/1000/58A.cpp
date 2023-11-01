#include <iostream>
using namespace std;

#define printnl(a) cout << a << "\n";

string s;
char ch;

void func() {
    cin >> s;
    int helloCount[4] = {1,1,2,1};
    char hello[4] = {'h','e','l','o'};
    int j=0;
    for (int i=0; i<s.size(); i++) {
        ch = s[i];
        if (ch == hello[j]) {
            helloCount[j]--;
            if (helloCount[j] == 0) j++;
        }
        if (j == 4) {
            printnl("YES");
            return;
        }
    }
    printnl("NO");
}


int main() {
    int t;
    t=1;
    while (t--) {
        func();
    }
    
    return 0;
}