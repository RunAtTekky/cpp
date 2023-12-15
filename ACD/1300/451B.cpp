/*
    RunAt - grey
*/
#include <iostream>
#include <vector>
using namespace std;

typedef int long long ll;
#define p2(a,b) cout << a << " " << b << "\n";
#define readV(vec) for (auto &e: vec) cin >> e;
#define YES cout << "yes" << "\n"
#define NO cout << "no" << "\n"

void solve() {
    ll n;
    cin >> n;

    vector<ll> arr(n);
    readV(arr);

    int i=0; int j=0;
    int start = 0;
    int end = 0;
    int prevMax = -1;
    bool visited = false;

    while (i<n-1) {
        if (arr[i] > arr[i+1]) {
            start = i;
            if (visited) {NO; return;}
            visited = true;
        
            while (i < n-1 && arr[i] > arr[i+1] && arr[i+1] > prevMax) {
                i++;
                end = i;
            }
            if (i == n-1) {YES; p2(start+1, end+1); return;}

            if (arr[i+1] < prevMax) {NO; return;}
            if (arr[start] > arr[i+1]) {NO; return;}
        }
        prevMax = arr[i];
        i++;
    }
    YES;
    p2(start+1, end+1);
    
}


int main() {
    solve();
}