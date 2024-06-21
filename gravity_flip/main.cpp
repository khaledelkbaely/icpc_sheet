#include <algorithm>
#include <cstdlib>
#include <iostream>

int main() {
	// n => number of cols
	// cols => number of cubes in col
	int *cols;
	unsigned long n;

	std::cin >> n;
	// create cubes array
	cols = (int *) malloc(n * sizeof(int));
	for (int i = 0; i < (int)n; i++) {
		std::cin >> cols[i];
	}

	// gravity flip
	// sort
	std::sort(cols, cols+n);

	// print answer
	for (int i = 0; i < (int)n-1; i++) {
		std::cout << cols[i] << " ";
	}
	std::cout << cols[n-1] << std::endl;
}
