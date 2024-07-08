#include <iostream>

int main(void) {
	int n1, n2;

	std::cin >> n1 >> n2; // 4 2

	int num = 7 - (n1 > n2 ? n1 : n2); // 3
	int den = 6;

	for (int i = num; i > 1; i--) {
		if (den % i == 0 && num % i == 0) {
			num /= i;
			den /= i;
			break;
		}
	}

	std::cout << num << '/' << den;
}
