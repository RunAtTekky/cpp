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
    int x,y;
    vector<pair<int,int>> points;
    for (int i=0; i<n; i++) {
        cin >> x >> y;
        pair<int,int> p(x,y);
        points.push_back(p);
    }

    // for (pair<int,int> point : points) {
    //     cout << "x: " << point.first << " y: " << point.second << "\n";
    // }

    int count = 0;
    
    for (int i=0; i<n; i++) {
        pair<int,int> c = points.at(i);
        // cout << "This is c x: " << c.first << " c y: " << c.second << endl;

        bool left = false;
        bool right = false;
        bool up = false;
        bool down = false;
        for (int j=0; j<n; j++) {
            if (j!=i) {
                pair<int,int> point = points.at(j);
                if (point.first == c.first ) {
                    if (point.second > c.second) up = true;
                    else down = true;
                } 
                if (point.second == c.second) {
                    if (point.first > c.first) right = true;
                    else left = true;
                }

            }
            if (up && left && right && down) {
                count++;
                break;
            }
        }
        
    }
    cout << count << endl;
}


int main() {
    int t;
    t = 1;
    
    while (t--) {
        func();
    }
    
    return 0;
}