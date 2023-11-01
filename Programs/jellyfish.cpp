#include <list>
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
const long long N = 200005;
int a[N];

void func() {
    long long n,m,k;
    cin >> n >> m >> k;

    list<long long> jelly;
    list<long long> gelly;

    for (int i=0; i<n; i++) {
        long long num;
        cin >> num;
        jelly.push_back(num);
    }
    for (int i=0; i<m; i++) {
        long long num;
        cin >> num;
        gelly.push_back(num);
    }

    sort(jelly.begin(), jelly.end());
    sort(gelly.begin(), gelly.end());


    
    for (int i=1; i<k; i++) {
        if (i%2 == 1) {
            // I want to remove from front of jelly
            // and add to the back of jelly
            // Remove from back of Gelly
            // add to front of Gelly
            long long get = gelly.back();
            long long give = jelly.front();

            if (get > give) {
                jelly.pop_front();
                jelly.push_back(get);

                gelly.pop_back();
                gelly.push_front(give);
            }
            

        }
        else {
            // reverse whatever happened above
            long long get = jelly.back();
            long long give = gelly.front();
            if (get > give) {
                gelly.pop_front();
                gelly.push_back(get);

                jelly.pop_back();
                jelly.push_front(give);
            }

        }
    }

    long long sum = 0;
    long long sum2 = 0;
    for (auto num : jelly) sum += num;
    for (auto num : gelly) sum2 += num;

    if (sum>sum2) cout << sum;
    else cout << sum2;

    cout << endl;
    
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