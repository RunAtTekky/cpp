#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
const long long N = 200005;
int a[N];

void func() {
    long long a,b,n;
    cin >> a >> b >> n;

    long long maxT = a;
    long long timer = b;

    vector<long long> tools(n);
    for (int i=0; i<n; i++) {
        cin >> tools[i];
    }

    long long time = 0;

    sort(tools.begin(), tools.end());

    int i=0;
    while (i < tools.size()) {
        while (i<tools.size() && tools[i] + timer <= maxT) {
            timer += tools[i];
            i++;
        }
        if (timer == 1 && tools[i] + timer > maxT) {
            timer = maxT;
            i++;
        }
        timer--;
        time++;
    }
    time += timer;

    cout << time << endl;

    
}

// Main
int main() {
    int t;
    cin >> t;
    
    while (t--) {
        func();
    }
    
    return 0;
}