#include <iomanip>
#include <iostream>

bool no_common_divisor(int n, int m) {
    if (m > n)
        return no_common_divisor(m, n);
    else if (n > m) {
        for (int i = 2; i <= m; i++) {
            if (m % i == 0 && n % i == 0) {
                return false;
            }
        }
        return true;
    }
    return false;
}

int main (int argc, char *argv[]) {
    int step{}, mod{};

    while (std::cin >> step >> mod) {
        std::cout << std::setw(10) << step;
        std::cout << std::setw(10) << mod << "    ";
        if (no_common_divisor(mod, step))
            std::cout << std::left << "Good Choice\n\n";
        else
            std::cout << std::left << "Bad Choice\n\n";
    }

    return 0;
}
