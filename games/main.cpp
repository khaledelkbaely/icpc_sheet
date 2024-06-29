#include <cstddef>
#include <iostream>
#include <vector>

int main() {
	std::size_t number_of_teams{};
	int games{};

	std::cin >> number_of_teams;

	std::vector<int> hosts_color(number_of_teams);
	std::vector<int> guests_color(number_of_teams);

	for (std::size_t i = 0; i < number_of_teams; i++)
		std::cin >> hosts_color[i] >> guests_color[i];

	for (std::size_t i = 0; i < number_of_teams; i++)
		for (std::size_t j = 0; j < number_of_teams; j++)
			if (hosts_color[i] == guests_color[j])
				games++;
	std::cout << games;
}
