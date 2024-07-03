#include <array>
#include <cstddef>
#include <iostream>

int main(void) {
	std::array<int, 4> shoes_colors;

	for (int i = 0; i < shoes_colors.size(); i++) {
		std::cin >> shoes_colors[i];

		for (int j = i-1; j >= 0; j--) {
			if (shoes_colors[j] == shoes_colors[i]) {
				shoes_colors[i] = -1;
				break;
			}
		}
	}
	int unique{0};
	for (std::size_t i = 0; i < shoes_colors.size(); i++)
		if (shoes_colors[i] != -1)
			++unique;
	std::cout << 4 - unique;
}
