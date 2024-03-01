/*
  RunAt - green
*/
#include <iostream>
#include <set>
#include <climits>
#include <string>
#include <numeric>
#include <cmath>
#include <map>
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

void solve() {
  ll n;
  cin >> n;
  
  string f,s;
  cin >> f >> s;

  int i,j;
  i=j=0;

  string path = "";
  path.push_back(f[0]);

  int count = 0;
  while (i+1<n) {
    if (f[i+1] < s[i]) {
      path += f[i+1];
      i++;
    }
    else if (s[i] < f[i+1]) {
      count++;
      path += s.substr(i,n-i-1);
      break;
    }
    else if (s[i] == f[i+1]) {
      j=i;
      while (j+1<n && f[j+1] == s[j]) {
        path += s[j];
        j++;
      }
      if (s[j] == '0'){
        count += (j-i+1);
        path += s.substr(j,n-j-1);
        break;
      }
      i=j;
    }
  }
  if (count == 0) count++;
  p(path+s[n-1]);
  p(count);
}

int main() {
  cin.sync_with_stdio(0);
  cin.tie(0);
  int tests = 1;
  cin >> tests;
  while (tests--) solve();
  return 0;
}
