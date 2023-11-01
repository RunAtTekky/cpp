#include <iostream>
#include <algorithm>
#include <numeric>
#include <string>
#include <vector>
using namespace std;

#define ll long long
#define printnl(a) cout << a << "\n";

void func() {
    int n;
    cin >> n;
    string team;
    string teamA;
    string teamB;

    cin >> teamA;
    int goalsByTeamA = 1;

    for (int i=2; i<=n; i++) {
        cin >> team;
        if (team == teamA) goalsByTeamA++;
        else teamB = team;
    }
    if (goalsByTeamA > n-goalsByTeamA) {
        printnl(teamA);
    }
    else {
        printnl(teamB);
    }

}


int main() {
    int t;
    t=1;
    while (t--) {
        func();
    }
    
    return 0;
}