#include <iostream>
#include <algorithm>
#include <numeric>
#include <string>
#include <vector>
using namespace std;

#define ll long long

void func() {
    int n;
    cin >> n;

    
    
    vector<int> a(3,0);


    while (n--) {
        
        for (int i=0; i<3; i++) {
            int val;
            cin >> val;
            a[i] += val;
        }

    }
    for (auto num : a) {
        if (num != 0) {
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
    return;
    
    
    
}


int main() {
    func();
    return 0;
}