#include <iostream>
#include <string>

int main() {
	std::string s, t;

	std::cin >> s;
	std::cin >> t;

	char *p1 = &s[0];
	char *p2 = &t[0];
	while (*p1 && *p2) {
		if (*p1 == *p2)
			++p1;
		p2++;
	}
	std::cout << p1 - &s[0] + 1;
}
