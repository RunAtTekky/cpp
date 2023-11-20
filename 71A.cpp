#include <iostream>
#include <string>
using namespace std;

#define printnl(a) cout << a << "\n"

void solve() {
    string word;
    cin >> word;

    int lengthOfWOrd = word.length();
    if(lengthOfWOrd<=10) printnl(word);
    else {
        char firstLetter = word[0];
        char lastLetter = word[lengthOfWOrd-1];
        int numbersBWfirstAndLast = lengthOfWOrd-2;
        cout << firstLetter << numbersBWfirstAndLast << lastLetter << "\n";
    }
    
}


int main() {
    int tests;
    cin >> tests;
    while (tests--) solve();
    return 0;
}