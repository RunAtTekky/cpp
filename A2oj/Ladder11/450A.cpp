#include <iostream>
#include <queue>
#include <algorithm>
#include <numeric>
#include <string>
#include <vector>
using namespace std;

#define ll long long

void func() {
    int n,m;
    cin >> n >> m;
    
    int childWants[101];
    for (int i=0; i<n; i++) {
        cin >> childWants[i];
    }
    queue<int> childIndex;
    for (int i=0; i<n; i++) {
        childIndex.push(i);
    }

    while (childIndex.size() != 1) {
        childWants[childIndex.front()] -= m;
        if (childWants[childIndex.front()] > 0) {
            childIndex.push(childIndex.front());
            childIndex.pop();
        } else childIndex.pop();
    }
    int ans = childIndex.front() + 1;
    cout << ans << endl;




}


int main() {
    int t;
    t=1;
    
    while (t--) {
        func();
    }
    
    return 0;
}