#include <iostream>
using namespace std;

int main() {
  int t = 1;
  // cin >> t;
  while (t--) {
    long long n;
    cin >> n;
    
    if (n==0) {cout << 1 << "\n"; break;}

    int rem = n%4;

    switch (rem)
    {
    case 1:
      cout << "8" << "\n";
      break;
    case 2:
      cout << "4" << "\n";
      break;
    case 3:
      cout << "2" << "\n";
      break;
    case 0:
      cout << "6" << "\n";
      break;
    default:
      break;
    }
  }
}
