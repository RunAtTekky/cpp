#include <iostream>
#include <vector>
using namespace std;


void func(int n) {
    vector<int> v;
    v.push_back(2);
    v.push_back(3);
    int i = 0;
    int j = 4;
    while (i<n-2) {
        int prev = v.at(i) + v.at(i+1);
        while ((3*j)%prev == 0) {
            j++;
        }
        v.push_back(j);
        j++;
        i++;
    }
    for (auto num : v) cout << num << " ";
    cout << endl;

}

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;

        func(n);
    }

    
    return 0;
}