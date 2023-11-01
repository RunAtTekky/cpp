#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Function to reverse a substring within the string s from index a to index b
void reverseSubstring(string& s, int a, int b) {
    while (a < b) {
        swap(s[a - 1], s[b - 1]);
        a++;
        b--;
    }
}

int main() {
    int t;
    cin >> t;  // Number of test cases
    
    while (t--) {
        int n, k;
        cin >> n >> k;  // Length of the string and arrays l and r
        string s;
        cin.ignore(); // Ignore newline character from previous input
        getline(cin, s);  // The initial string

        vector<int> l(k), r(k);
        for (int i = 0; i < k; ++i) {
            cin >> l[i];
        }

        for (int i = 0; i < k; ++i) {
            cin >> r[i];
        }

        int q;
        cin >> q;  // Number of modifications

        // Apply modifications
        while (q--) {
            int x;
            cin >> x;  // Description of modifications

            int i = 0;
            while (i < k && l[i] <= x) {
                i++;
            }
            
            int a = min(x, r[i - 1] + l[i - 1] - x);
            int b = max(x, r[i - 1] + l[i - 1] - x);
            reverseSubstring(s, a, b);
        }

        cout << s << '\n';
    }

    return 0;
}
