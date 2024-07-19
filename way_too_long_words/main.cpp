#include <cstddef>
#include <iostream>
#include <string>
#include <vector>

int main() {
	int nwords{};
	std::vector<std::string> words_abb;

	std::cin >> nwords;

	for (; nwords > 0; nwords--) {
		std::string word;
		std::cin >> word;
		std::size_t sword = word.size();
		if (sword > 10)
			words_abb.push_back(word[0] + std::to_string(sword-2) + word[sword-1]);
		else
		 words_abb.push_back(word);
	}
	for (std::string word : words_abb)
		std::cout << word << '\n';
}
