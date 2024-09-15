#include <iostream>
#include <vector>

int main (int argc, char *argv[]) {
    int n;
    std::cin >> n;

    std::vector<int> ps(n, 0);

    for (int i = 0; i < ps.size(); i++) {
        int c;
        std::cin >> c;
        ps[c-1] = i+1;
    }
    int i = 0;
    for (auto p : ps) {
        std::cout << p << ((i+1 != n) ? " " : "\n");
        i++;
    }

    return 0;
}
