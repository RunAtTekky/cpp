#include <iostream>
using namespace std;


void draw(int n, int m) {
    int body = 0;
    while (n/2 > 0) {
        for (int i=0; i<m; i++) {
            cout << "#";
        }
        cout << endl;
        body++;
        if (body%2 == 1) {
            for (int i=0; i<m-1; i++) {
                cout << ".";
            }
            cout << "#";
        }
        else {
            cout << "#";
            for (int i=1; i<m; i++) {
                cout << ".";
            }
        }
        cout << endl;
        n = n-2;
    }
    for (int i=0; i<m; i++) {
        cout << "#";
    }
    cout << endl;
}

int main() {
    int n,m;
    cin >> n >> m;

    draw(n,m);

    return 0;

}