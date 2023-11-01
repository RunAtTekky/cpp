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

    int inBus = 0;
    int capacity = 0;

    while (n--) {
        int a, b;
        cin >> a >> b;

        inBus = inBus - a;
        inBus = inBus + b;
        capacity = max(inBus,capacity);

    }
    cout << capacity << endl;
    return;
}


int main() {
    func();
    
    return 0;
}