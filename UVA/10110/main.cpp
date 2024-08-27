#include <cmath>
#include <iostream>

int main(int argc, char *argv[]) {
  unsigned int n{};
  while (std::cin >> n && n != 0) {
    unsigned int sq = static_cast<int>(std::sqrt(n));
    std::cout << ((sq * sq == n) ? "yes\n" : "no\n");
  }

  return 0;
}
