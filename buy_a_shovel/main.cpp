#include <iostream>

int main(void) {
	int k{}, r{};
	int n{1};

	std::cin >> k >> r;

	while (k*n % 10 != 0) {
		if ((k*n - r) % 10 == 0) {
			break;
		}
		n++;
	}
	std::cout << n;
}
