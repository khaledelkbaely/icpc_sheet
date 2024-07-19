#include <iostream>

int main() {
	int n{}, t{}, k{}, d{};

	std::cin >> n >> t >> k >> d;

	int curr_cakes{};
	int curr_time{};
	bool reasonable{ false };
	while (curr_cakes < n) {
		curr_cakes += k;
		curr_time += t;
		if (curr_time > d && curr_cakes < n) {
			reasonable = true;
			break;
		}
	}
	if (reasonable)
		std::cout << "YES";
	else
	 std::cout << "NO";
}
