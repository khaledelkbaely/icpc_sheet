#include <cctype>
#include <iostream>
#include <string>

int main() {
	std::string s1, s2;
	unsigned long i;

	std::cin >> s1;
	std::cin >> s2;

	for (i = 0; i < s1.length(); i++) {
		if (tolower(s1[i]) < tolower(s2[i])) {
			std::cout << -1;
			return 0;
		}
		else if (tolower(s1[i]) > tolower(s2[i])) {
			std::cout << 1;
			return 0;
		}
	}
	std::cout << 0;
	return 0;
}
