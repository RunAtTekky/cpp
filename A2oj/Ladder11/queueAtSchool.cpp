#include <iostream>
#include <algorithm>
#include <numeric>
#include <string>
#include <vector>
using namespace std;

#define ll long long

void func() {
    // input
    int n, t;
    cin >> n >> t;
    vector<char> queue(n);
    for (int i=0; i<n; i++) {
        cin>>queue[i];
    }

    // logic
    while (t--) {
        int i=0;
        while (i<n) {
            if (queue[i] == 'B' && queue[i+1] == 'G') {
                swap(queue[i],queue[i+1]);
                i++;
            }
            i++;
        }
    }
    // printing modified array
    for (auto c : queue) {
        cout << c ;
    }
    cout << endl;
}


int main() {
    func();
    
    return 0;
}