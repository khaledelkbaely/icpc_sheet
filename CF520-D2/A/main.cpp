#include <array>
#include <cctype>
#include <iostream>
#include <string>

int main (int argc, char *argv[]) {

    int n;
    std::cin >> n;

    std::string s;
    std::cin >> s;

    std::array<bool, 26> alphas{false};
    for (char c : s) {
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
