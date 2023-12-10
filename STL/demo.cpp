#include <iostream>
#include <string>

using namespace std;


int main() {
    int n; cin >> n;
    char c; cin >> c;
    string s; cin >> s;

    for (int i=0; i<n; i++) {
        if (s[i] == c) {
            cout << i << "s";
        }
        else {
            cout << i << "n";
        }
    }
}