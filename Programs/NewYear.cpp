#include <iostream>
#include <string>
using namespace std;


bool canAssemble(string a, string b, string c) {
    int alph[26];
    for (int i=0; i<26; i++) {
        alph[i] = 0;
    }
    for (int i=0; i<a.size(); i++) {
        int ch = a[i] - 'A';
        alph[ch] += 1;
    }
    for (int i=0; i<b.size(); i++) {
        int ch = b[i] - 'A';
        alph[ch] += 1;
    }

    int scr[26];
    for (int i=0; i<26; i++) {
        scr[i] = 0;
    }
    for (int i=0; i<c.size(); i++) {
        int ch = c[i] - 'A';
        scr[ch] += 1;
    }

    for (int i=0; i<26; i++) {
        if (alph[i] != scr[i]) {
            return false;
        }
    }
    return true;


}

int main() {
    string a,b,c;
    getline(cin,a);
    getline(cin,b);
    getline(cin,c);

    // string a = "HEY";
    // string b = "LOL";
    // string c = "LOLHEY";
    bool ans = canAssemble(a,b,c);

    if (ans) cout << "YES";
    else cout << "NO";

    
    // cout << "HEY" << endl;
    return 0;

}