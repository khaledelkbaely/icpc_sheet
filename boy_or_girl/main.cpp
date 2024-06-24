#include <iostream>
#include <string>

int main() {
	std::string userName;
	const char *p1, *p2;
	int i = 1;
	int distinct = 1;
	bool seen;

	std::cin >> userName;

	for (p1 = p2 = userName.c_str(); p1 && p2 && i++ < (int)userName.length();) {
		p1 = userName.c_str();
		seen = false;
		p2++;
		for (; p1 != p2; p1++) {
			if (*p2 == *p1) {
				seen = true;
				break;
			}
		}
		if (!seen)
			distinct++;
	}
	if (distinct % 2)
		std::cout << "IGNORE HIM!";
	else
		std::cout << "CHAT WITH HER";
}
