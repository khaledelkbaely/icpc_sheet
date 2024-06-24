#include <iostream>
#include <set>
#include <string>

int main() {
	std::string userName;
	std::set<char> char_set;

	std::cin >> userName;

	for (char *p = &userName[0]; *p; p++) {
		char_set.insert(*p);
	}

	if (char_set.size() % 2)
		std::cout << "IGNORE HIM!";
	else
		std::cout << "CHAT WITH HER!";
}
