/*
  RunAt - grey
*/
#include <iostream>
#include <string>
using namespace std;

#define YES cout << "YES" << "\n"
#define NO cout << "NO" << "\n"

bool checkAB(string s, bool first) {
  int found = 0;
  for (int i=0; i<s.size()-1; i++) {
    if (first) {
      if (s[i]=='A' && s[i+1]=='B') {
        i++;
        first = !first;
        found++;
      }
    }
    else {
      if (s[i] == 'B' && s[i+1] == 'A') {
        i++;
        first = !first;
        found++;
      }
    }
    if (found == 2) return true;
  }
  return found==2;
}

void solve() {
  string s;
  cin >> s;

  bool front = checkAB(s,true);
  bool back = checkAB(s,false);

  if (front || back) {YES;}
  else {NO;}
}

int main() {
  int tests = 1;
  // cin >> tests;
  while (tests--) solve();
  return 0;
}
