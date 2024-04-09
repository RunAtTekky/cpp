#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void solve() {
    int n,m,k;
    cin >> n >> m >> k;

    vector<int> preferences(n);
    vector<int> room_sizes(m);

    for (auto &e : preferences) cin >> e;
    for (auto &e : room_sizes) cin >> e;

    sort(preferences.begin(), preferences.end());
    sort(room_sizes.begin(), room_sizes.end());

    int i,j, total_rooms_allotted;
    i=j=total_rooms_allotted=0;

    while (i<n && j<m) {
        if (room_sizes[j] + k < preferences[i]) j++;
        else if (room_sizes[j] - k > preferences[i]) i++;
        else {total_rooms_allotted++; i++; j++;}
    }

    cout << total_rooms_allotted << "\n";

}

int main() {
    solve();
}
