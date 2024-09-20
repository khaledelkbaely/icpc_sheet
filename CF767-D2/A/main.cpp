#include <iostream>
#include <vector>

int main (int argc, char *argv[]) {
    int n{};
    std::cin >> n;

    std::vector<bool> seq(n, 0);

    int idx = n-1;
    for (; n > 0; n--) {
        int curr;
        std::cin >> curr;

        seq[curr-1] = true;

        while (seq[idx]) {
            std::cout << idx+1 << ' ';
            idx--;
        }
        std::cout << '\n';

    }


    return 0;
}
