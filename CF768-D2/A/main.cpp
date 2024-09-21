#include <iostream>

int main (int argc, char *argv[]) {
    int n{};

    std::cin >> n;

    int count{};
    for (; n > 0; n--) {
        int a{};
        std::cin >> a;
        count++;
    }
    if (count > 2)
        std::cout << count-2 << '\n';
    else
        std::cout << 0 << '\n';


    return 0;
}
