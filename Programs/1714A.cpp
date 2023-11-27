/*
    RunAt - grey
*/
#include <iostream>
using namespace std;

typedef int long long ll;
#define printnl(a) cout << a << "\n";

void solve() {
    ll n, H, M;
    cin >> n >> H >> M;

    ll sleepTime = H*60 + M;

    ll timeToSleep = INT_MAX;

    for (int i=0; i<n; i++) {
        ll alarmH, alarmM;
        cin >> alarmH >> alarmM;

        ll tillAlarm = alarmH*60 + alarmM;

        if (tillAlarm - sleepTime >= 0) {
            timeToSleep = min(timeToSleep,tillAlarm-sleepTime);
        } else {
            timeToSleep = min(timeToSleep, 24*60 + tillAlarm - sleepTime);
        }
    }

    cout << timeToSleep/60 << " " << timeToSleep%60 << "\n";
}


int main() {
    int tests = 1;
    cin >> tests;
    while (tests--) solve();
    return 0;
}