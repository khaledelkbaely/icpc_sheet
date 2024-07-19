#include <cctype>
#include <iostream>
#include <string>
#include <unordered_set>

int main() {
	std::unordered_set<char> letters;

	std::string line_input;

	std::getline(std::cin, line_input);

	for (const char ch : line_input) {
		if (isalpha(ch))
			letters.insert(ch);
	}
	std::cout << letters.size();
}
