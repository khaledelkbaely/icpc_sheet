#include <cstdlib>
#include <iostream>

int main() {
	// n => number of cols
	// cols => number of cubes in col
	int *cols, *p1, *p2, tmp;
	unsigned long n;

	std::cin >> n;
	
	// create cubes array
	cols = (int *) malloc(n * sizeof(int));
	for (int i = 0; i < (int)n; i++) {
		std::cin >> cols[i];
	}
	p1 = cols;
	p2 = cols  + n - 1;

	// gravity flip
	while (p1 != p2) {
		if (*p1 > *p2) {
			tmp = *p1;
			*p1 = *p2;
			*p2 = tmp;
		}
		if (*p1 > *(p2 - 1))
			p2--;
		else
		 p1++;
	}

	// print answer
	for (int i = 0; i < (int)n-1; i++) {
		std::cout << cols[i] << " ";
	}
	std::cout << cols[n-1] << std::endl;
}
