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

    vector<int> points(n);
    for (int i=0; i<n; i++) {
        cin >> points[i];
    }
    int min = points[0];
    int max = points[0];
    int amazing = 0;

    for (int i=1; i<n; i++) {
        if (points[i] < min) {
            min = points[i];
            amazing++;
        } else if (points[i] > max) {
            max = points[i];
            amazing++;
        }
    }
    cout << amazing << endl;
    return;
}


int main() {
    func();
    
    return 0;
}