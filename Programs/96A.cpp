/*
    RunAt - grey
*/
#include <iostream>
#include <string>
using namespace std;

#define printnl(a) cout << a << "\n";

void solve() {
    string team; cin >> team;
    char previousPlayer = team[0];
    int cnt = 0;
    for (auto player : team) {
        if (player == previousPlayer) {
            cnt++;
            if (cnt == 7) {printnl("YES"); return;}
        } else {
            previousPlayer = player;
            cnt = 1;
        }
    }
    printnl("NO");
}


int main() {
    solve();
}