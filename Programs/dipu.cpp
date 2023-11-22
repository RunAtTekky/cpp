#include <iostream>
using namespace std;

void solve() {
    string s;
    cin >> s;
    string result = "";
    string final = "";

    for (int i = 0; i < s.length(); i++) {
        if (s[i] != 'a' && s[i] != 'e' && s[i] != 'i' && s[i] != 'o' && s[i] != 'u' && s[i] !='y' &&
            s[i] != 'A' && s[i] != 'E' && s[i] != 'I' && s[i] != 'O' && s[i] != 'U' && s[i] !='Y') {
            result = result + s[i];
        }
    }

    for (int i = 0; i < result.length(); i++) {
        if (result[i] < 97) {
            final = final + char(result[i] + 32);
        } 
        else {
            final = final + result[i];
        }
    }
    // for (int i = result.length() - 1; i >= 0; i--) {
    //     if (result[i] < 97) {
    //         final = final + char(result[i] + 32);
    //     } 
    //     else {
    //         final = final + result[i];
    //     }
    // }

    for (int i = 0; i<final.length(); i++) {
        cout << "." << final[i];
    }
    cout << endl;
}

int main() {
    int t;
    t = 1;
    while (t--) {
        solve();
    }

    return 0;
}
