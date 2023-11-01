#include <iostream>
#include <set>
#include <algorithm>
#include <numeric>
#include <string>
#include <vector>
using namespace std;

#define ll long long

void func() {
    int a,b,c,d;
    cin >> a >> b >> c >> d;

    set<int> shoes;
    shoes.insert(a);
    shoes.insert(b);
    shoes.insert(c);
    shoes.insert(d);

    cout << 4-shoes.size() << endl;
    
    return;


}


int main() {
    func();
    
    return 0;
}