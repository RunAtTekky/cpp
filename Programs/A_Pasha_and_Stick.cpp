#include <iostream>

int main() {
  int n;
  std::cin >> n;

  auto ans = !(n&1) * ((n/4) - !((n/2)&1));
  std::cout << ans << "\n";
}