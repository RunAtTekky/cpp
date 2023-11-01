#include <iostream>
#include <algorithm>
#include <numeric>
#include <string>
#include <vector>
using namespace std;

#define ll long long

int getMinIndex(vector<int> v) {
    int ind = 0;
    for (int i=0; i<v.size(); i++) {
        if (v[i] <= v[ind]) {
            ind = i;
        }
    }
    return ind;

}
int getMaxIndex(vector<int> v) {
    int ind = 0;
    for (int i=0; i<v.size(); i++) {
        if (v[i] > v[ind]) {
            ind = i;
        }
    }
    return ind;
}

void func() {
    int n;
    cin >> n;

    vector<int> v(n);
    for (int i=0; i<n; i++) {
        cin >> v[i];
    }

    int minIndex = getMinIndex(v);
    int maxIndex = getMaxIndex(v);

    if (maxIndex < minIndex ) cout <<  v.size()-1-minIndex + maxIndex << endl;
    else cout << v.size()-1-minIndex + maxIndex -1 << endl;

}


int main() {
    int t;
    t=1;
    
    while (t--) {
        func();
    }
    
    return 0;
}