#include <iostream>
#include <vector>
using namespace std;


// Program to create a vector copy from another vector.
int main() {
  int n; cin >> n;
  vector<int> vec(n);
  for (auto &e: vec) cin >> e;

  vector<int> vec2;
  vec2 = vec;

  vec2[0] = 8;

  for (auto &e: vec) cout << e << " ";
  cout << "\n";
  for (auto &e: vec2) cout << e << " ";
  cout << "\n";

}
