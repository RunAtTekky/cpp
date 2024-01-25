/*
    RunAt - grey
*/
#include <iostream>
#include <set>
#include <climits>
#include <cmath>
#include <numeric>
#include <map>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

typedef int long long ll;
#define p(a) cout << a << "\n";
#define p2(a,b) cout << a << " " << b << "\n";
#define YES cout << "YES" << "\n"
#define NO cout << "NO" << "\n"

const int N = 1e5+5;
const int MOD = 1e9+7;

vector<int> getInd(string t, string str) {
  int n = str.size();
  vector<int> indexes;
  for (int i=0; i<n-1; i++) {
    if (str.substr(i,2)==t) {
      indexes.push_back(i);
    }
  }
  return indexes;
}

void solve() {
  string s;
  cin >> s;

  int n = s.size();

  vector<int> indOfAB = getInd("AB",s);
  int mAB = indOfAB.size();
  vector<int> indOfBA = getInd("BA",s);
  int mBA = indOfBA.size();
  if (mAB == 0 || mBA == 0) {NO; return;}
  int ind = abs(indOfAB[mAB-1]-indOfBA[0]);
  int ind2 = abs(indOfBA[mBA-1]-indOfAB[0]);
  if (max(ind,ind2)>=2) {YES;}
  else {NO;}
}

int main() {
  int tests = 1;
  // cin >> tests;
  while (tests--) solve();
  return 0;
}
