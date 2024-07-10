#include <iostream>

int main() {
	int number_of_oranges{}, max_orange_size{}, waste_limit{};
	int total{}, times_to_empty_waste{};

	std::cin >> number_of_oranges
		 >> max_orange_size
		 >> waste_limit;
	for (int i = 0; i < number_of_oranges; ++i) {
		int orange{};
		std::cin >> orange;

		if (orange <= max_orange_size)
			total += orange;

		if (total > waste_limit) {
			times_to_empty_waste++;
			total = 0;
		}
	}
	std::cout << times_to_empty_waste;
}
