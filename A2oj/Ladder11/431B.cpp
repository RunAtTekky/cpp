#include <iostream>
#include <set>
#include <climits>
#include <algorithm>
#include <numeric>
#include <string>
#include <vector>
using namespace std;

#define ll long long
#define printnl(a) cout << a << "\n";
#define printab(a,b) cout << a << " " << b << "\n";

int happy[6][6];
void func() {
    for (int i=1; i<=5; i++) {
        for (int j=1; j<=5; j++) {
            cin >> happy[i][j];
        }
    }
    ll maxi = 0;
    for (int a=1; a<=5; a++) {

        for (int b=1; b<=5; b++) {

            for (int c=1; c<=5; c++) {

                for (int d=1; d<=5; d++) {
                
                    for (int e=1; e<=5; e++) {
                        vector<int> v = {a,b,c,d,e};
                        set<int> tSet(v.begin(), v.end());
                        if (v.size() == tSet.size()) {
                            ll total_happy = happy[a][b] + happy[b][a] + happy[b][c] + happy[c][b] + 2*(happy[c][d] + happy[d][c]) + 2*(happy[d][e] + happy[e][d]);
                            if (total_happy > maxi) {
                                maxi = total_happy;
                            }
                        }

                        
                    }
                }
            }
        }
    }
    printnl(maxi);

}


int main() {
    int t;
    t=1;
    while (t--) {
        func();
    }
    
    return 0;
}