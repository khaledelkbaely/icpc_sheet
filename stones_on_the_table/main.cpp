#include <cstddef>
#include <iostream>
#include <string>

int main() {
	std::size_t n{}, count{};
	char prev;
	std::string stones;

	std::cin >> n;

	std::cin >> stones;

	prev = stones[0];
	for (std::size_t i = 1; i < n; i++) {
		if (stones[i] == prev)
			count++;
		else
			prev = stones[i];
	}
	std::cout << count;
}
