#include <iostream>
#include <string>

int main (int argc, char *argv[]) {
    char shift;
    std::string keys{"qwertyuiopasdfghjkl;zxcvbnm,./"};
    std::string sol;

    std::cin >> shift;

    switch (shift) {
    case 'R': {
            char c;
            while (std::cin >> c) {
                sol.push_back(keys[keys.find(c)-1]);
            }
        }
        break;
    case 'L': {
            char c;
            while (std::cin >> c) {
                sol.push_back(keys[keys.find(c)+1]);
            }
        }
        break;
    }
    std::cout << sol << '\n';

    return 0;
}
