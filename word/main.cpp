#include <cctype>
#include <iostream>
#include <string>

int main() {
	std::string word;
	int upper{}, lower{};

	std::cin >> word;
	
	char *p = &word[0];
	while (*p) {
		if (islower(*p))
			lower++;
		else
			upper++;
		p++;
	}

	if (upper > lower)
		for (char &c : word)
			c = (char)std::toupper(c);
	else
		for (char &c : word)
			c = (char)std::tolower(c);
	std::cout << word;
}
