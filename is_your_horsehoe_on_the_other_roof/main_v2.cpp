#include <iostream>
#include <set>

int main(void) {
	std::set<int> unique;

	for (int i = 0; i < 4; ++i) {
		int n;
		std::cin >> n;
		unique.insert(n);
	}
	std::cout << 4 - unique.size();
}
