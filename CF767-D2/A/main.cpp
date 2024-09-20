#include <algorithm>
#include <iostream>
#include <vector>

int main (int argc, char *argv[]) {
    int n{};
    std::cin >> n;

    std::vector<int> skipped(n, 0);

    int max = n;
    for (int i = 0; i < n; i++) {
        int curr;
        std::cin >> curr;

        if (curr == max) {
            std::cout << curr << ' ';
            max--;
            for (int j = n-1; j >= 0; j--) {
                if (skipped[j]){
                    std::cout << skipped[j] << ' ';
                    skipped[j] = 0;
                    max--;
                }
            }
            std::cout << "\n";
        } else {
            skipped[curr-1] = curr;
            std::cout << '\n';
        }
    }


    return 0;
}
