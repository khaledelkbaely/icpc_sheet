#include <iostream>

int main() {
	int n{}, current{}, recruits{}, untreated{};

	std::cin >> n;

	for (int i = 0; i < n; i++) {
		std::cin >> current;
		if (current > 0)
			recruits +=  current;
		else if (current == -1 && recruits)
			recruits--;
		else if (current == -1 && !recruits)
			untreated++;
	}
	std::cout << untreated;
}
