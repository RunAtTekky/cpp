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

    int heights[105];
    for (int i=0; i<n; i++) {
        cin >> heights[i];
    }
    int minDiff = 10000;
    pair<int,int> ind;
    for (int i=0; i<n; i++) {
        if (abs(heights[i]-heights[i+1]) < minDiff) {
            minDiff = abs(heights[i]-heights[i+1]);
            ind.first = i;
            ind.second = i+1;
        }
    }
    if (abs(heights[0]-heights[n-1]) < minDiff) {
        cout << 1 << " " << n << "\n";
    }
    else cout << ind.first + 1 << " " << ind.second+1 << "\n";
}


int main() {
    int t;
    t = 1; 
    while (t--) {
        func();
    }
    
    return 0;
}