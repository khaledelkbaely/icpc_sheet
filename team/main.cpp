#include <iostream>


int main() {
	int n, i, problems; // number of games
	int petya, vasya, tonya; // each of the friend's view on the problem

	n = petya = vasya = problems = tonya = 0;

	std::cin >> n;

	for (i = 0; i < n; i++) {
		std::cin >> petya >> vasya >> tonya;
		if (petya + vasya + tonya >= 2)
			problems++;
	}

	std::cout << problems << '\n';
}
