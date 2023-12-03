/*
    RunAt - grey
*/
#include <iostream>
#include <set>
#include <map>
#include <climits>
#include <string>
#include <numeric>
#include <algorithm>
#include <vector>
using namespace std;

typedef int long long ll;
#define printnl(a) cout << a << "\n";
#define printab(a,b) cout << a << " " << b << "\n";
#define readV(vec) for (auto &e: vec) cin >> e;
#define debugV(vec) for (auto &e: vec) {cout << e << " ";} cout << "\n";
#define YES cout << "YES" << "\n"
#define NO cout << "NO" << "\n"

const int N = 100005;

ll getMaxTasks(ll n) {
    if (n%7 == 0) return n/7;
    return n/7 + 1;
}

void solve() {
    ll n, P, l, t;
    cin >> n >> P >> l >> t;

    ll maxTasks = getMaxTasks(n);
    ll pointsInOneDayForTwo = l + 2*t;
    ll pointsInOneDayForOne = l + t;

    ll points = 0;
    // points = pointsInOneDayForTwo*(maxTasks/2);
    // points += (maxTasks%2 == 1) ? pointsInOneDayForOne : 0;

    // printnl(getMaxTasks(n));
    ll days = 0;

    ll doubleDays = maxTasks/2;

    ll tempPo = doubleDays*pointsInOneDayForTwo;
    
    tempPo += (maxTasks%2 == 1) ? pointsInOneDayForOne : 0;



    if (tempPo < P) {
        ll po = P - tempPo;
        days = doubleDays;
        days += (po%l) ? po/l + 1 : po/l;
        // printnl(n-days);
    }
    else {
        if (pointsInOneDayForTwo*doubleDays >= P) {
            if (P%pointsInOneDayForTwo == 0) {
                days += P/pointsInOneDayForTwo;
            } else days += P/pointsInOneDayForTwo + 1;
        }
        else {
            ll temp = doubleDays*pointsInOneDayForTwo;

            if ((P-temp)%pointsInOneDayForOne == 0) {
                days += P-temp/pointsInOneDayForOne;
            }
            else {
                days += P-temp/pointsInOneDayForOne + 1;
            }
            // while (doubleDays*pointsInOneDayForTwo )
            // if (doubleDays == 0) {
            //     days++;
            // }
            // else {

            //     if (P%pointsInOneDayForTwo == 0) {
            //         days += P/pointsInOneDayForTwo;
            //     } else days += P/pointsInOneDayForTwo + 1;
            //     days++;
            // }
        }
    }
    printnl(n-days);
     
    // while (maxTasks != 0 && maxTasks != 1) {
    //     points += pointsInOneDayForTwo;
    //     days++;
    //     maxTasks -= 2;
    //     // printnl(points);
    //     // printnl(maxTasks);
    //     if (points >= P) {
    //         printnl(n-days); return;
    //     }
    // }
    // // printnl(days);
    // if (maxTasks == 1) {
    //     points += pointsInOneDayForOne;
    //     days++;
    //     if (points >= P) {
    //         printnl(n-days); return;
    //     }
    // }
    // // printnl(days);

    // // days += (P-points)/l;
    // days += ((P-points)%l == 0) ? (P-points)/l : (P-points)/l + 1;
    // // printnl(days);
    // printnl(n-days);



    // printnl(n-daysToStudy);

}


int main() {
    int tests = 1;
    cin >> tests;
    while (tests--) solve();
    return 0;
}