#include <cstddef>
#include <iostream>
#include <vector>

int main() {
	std::size_t n{};
	int groups{};
	int last = 0;

	std::cin >> n;

	std::vector<int> magnets(n);

	for (auto &i : magnets)
		std::cin >> i;

	for (std::size_t i = 0; i < n; i++) {
		if (last == magnets[i])
			continue;
		last = magnets[i];
		groups++;
	}
	std::cout << groups;
}
