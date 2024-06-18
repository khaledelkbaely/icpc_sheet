#include <cstdio>
#include <iostream>


int main() {
	// limak weight => a
	// bob weight => b
	int a = 0, b = 0;
	int years = 0;

	std::cin >> a >> b;

	while (b >= a) {
		a *= 3;
		b *= 2;
		years++;
	}
	std::cout << years;
}
