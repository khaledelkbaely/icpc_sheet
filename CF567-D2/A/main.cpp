#include <algorithm>
#include <iostream>
#include <vector>

int main (int argc, char *argv[]) {
    int n{};
    std::cin >> n;

    std::vector<int> cities_xcord(n, 0);
    for (int &x : cities_xcord) {
        std::cin >> x;
    }

    for (int i = 0; i < n; i++) {
        int max{}, min{};
        max = std::max(cities_xcord[n-1] - cities_xcord[i],
                       cities_xcord[i] - cities_xcord[0]);
        if (i > 0 && i < n-1)
            min = std::min(cities_xcord[i] - cities_xcord[i-1],
                           cities_xcord[i+1] - cities_xcord[i]);
        else if (i > 0)
            min = cities_xcord[i] - cities_xcord[i-1];
        else
            min = cities_xcord[i+1] - cities_xcord[i];
        std::cout << min << ' ' << max << '\n';
    }

    return 0;
}
