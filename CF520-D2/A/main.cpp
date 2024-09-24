#include <array>
#include <cctype>
#include <iostream>

int main (int argc, char *argv[]) {

    int n;
    std::cin >> n;

    char c;
    std::array<bool, 26> alphas{false};
    for (; n > 0; --n) {
        std::cin >> c;
        c = std::tolower(c);
        alphas[c-'a'] = true;
    }
    for (bool x : alphas) {
        if (!x) {
            std::cout << "NO\n";
            return 1;
        }
    }
    std::cout << "YES\n";

    return 0;
}
