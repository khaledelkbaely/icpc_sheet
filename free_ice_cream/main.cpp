#include <iostream>

int main() {
	int nkids{}, npacks{}, distressed_kids{};

	std::cin >> nkids >> npacks;

	for (; nkids > 0; nkids--) {
		char op;
		int cpacks;
		std::cin >> op >> cpacks;

		switch (op) {
			case '+':
				npacks += cpacks;
				break;
			case '-':
				if (cpacks < npacks)
					npacks -= cpacks;
				else
					 distressed_kids++;
				break;
		}
	}
	std::cout << npacks << ' ' << distressed_kids;
}
