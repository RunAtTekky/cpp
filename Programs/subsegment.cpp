#include <iostream>
#include <vector>
using namespace std;


// int func(int n, int k) {
//     int a[n];
//     bool res = false;
//     for (int i=0; i<n; i++) {
//         int num;
//         cin >> num;
//         a[i] = num;
//         if (a[i] == k) res = true;
//     }
//     return res;

// }

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n, k;
        cin >> n >> k;

        vector<int> a;
        bool res = false;
        for (int i=0; i<n; i++) {
            int num;
            cin >> num;
            a.push_back(num);
            if (num == k) res = true;
        }
        if (res == true) cout << "YES";
        else cout << "NO";
        cout << endl;
    }

    
    return 0;
}