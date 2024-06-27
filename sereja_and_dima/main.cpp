#include <cstddef>
#include <iostream>
#include <vector>


int main() {
	std::size_t n{};
	int sereja_score{};
	int dima_score{};

	std::cin >> n;

	std::vector<int> cards(n);
	for (std::size_t i = 0; i < n; i++)
		std::cin >> cards[i];


	for (std::size_t left = 0, i = 0, right = cards.size() - 1; left <= right; i++) {
		if (cards[left] > cards[right]) {
			if (i % 2 == 0)
				sereja_score += cards[left];
			else
				dima_score += cards[left];
			left++;
		}
		else {
			if (i % 2 == 0)
				sereja_score += cards[right];
			else
				dima_score += cards[right];
			if (right == 0)
				break;
			right--;
		}
	}
	std::cout << sereja_score << " " << dima_score;
}
