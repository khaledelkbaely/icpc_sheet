#include <array>
#include <cstddef>
#include <iostream>
#include <string>

int main() {
	std::array<int, 3> nums{};
	std::string sum;

	std::cin >> sum;

	for (std::size_t i = 0; i < sum.size(); i += 2)
		nums[static_cast<std::size_t>(sum[i] - '1')] += 1;

	sum.erase();
	for (std::size_t i = 0; i < nums.size(); i++) {
		for (; nums[i]; nums[i]--) {
			sum += std::to_string(i+1) + '+';
		}
	}
	std::cout << sum.replace(sum.end()-1, sum.end(), "");
}
