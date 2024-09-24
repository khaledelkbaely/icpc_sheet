#include <algorithm>
#include <iostream>
#include <vector>

int main (int argc, char *argv[]) {
    int n, sum{};
    std::cin >> n;

    std::vector<int> coins(n, 0);
    for (int &i : coins) {
        std::cin >> i;
        sum += i;
    }
    std::sort(coins.begin(), coins.end());

    int max{}, min_coins_cnt{};
    for (size_t i = coins.size()-1; i >= 0; --i) {
        max += coins[i];
        min_coins_cnt++;
        if (max > sum - max) {
            std::cout << min_coins_cnt;
            return 0;
        }
    }

    return 0;
}
