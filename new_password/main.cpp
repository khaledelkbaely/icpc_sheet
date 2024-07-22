#include <iostream>
#include <string>

int main() {
	int n, k;
	std::string new_pass{};
	std::cin >> n >> k;

	for (int i = 0; i < n; i++) {
		new_pass += static_cast<char>('a' + i%k);
	}
	std::cout << new_pass;
}
