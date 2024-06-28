#include <array>
#include <cstddef>
#include <cstdlib>
#include <iostream>
#include <string>

int main() {
	std::array<int, 4> cal_foreach_strip;
	int total_cal{};

	for (auto &e : cal_foreach_strip)
		std::cin >> e;

	std::string game;

	std::cin >> game;

	for (std::size_t i = 0; i < game.length(); i++) {
		total_cal += cal_foreach_strip[(std::size_t)(game[i] - '0' - 1)];
	}
	std::cout << total_cal;
}
