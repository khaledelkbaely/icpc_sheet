#include <iostream>
#include <string>

int main() {
	char curr{'a'};
	std::string name;
	int rotations{};

	std::cin >> name;

	for (auto c : name) {
		if (abs(c - curr) > 13)
			rotations += 26 - abs(c - curr);
		else if (abs(c - curr) <= 13)
			rotations += abs(c - curr);
		curr = c;
	}
	std::cout << rotations;
}
