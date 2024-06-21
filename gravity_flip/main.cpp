#include <cstdlib>
#include <iostream>

int main() {
	// n => number of cols
	// cols => number of cubes in col
	int *cols, tmp;
	unsigned long n;
	bool swapped = false;

	std::cin >> n;
	
	// create cubes array
	cols = (int *) malloc(n * sizeof(int));
	for (int i = 0; i < (int)n; i++) {
		std::cin >> cols[i];
	}

	// gravity flip
	// sort
	for (int i = 0; i < (int)n && !swapped; i++) {
		for (int j = 0; j < (int)n-i-1; j++) {
			if (cols[j+1] < cols[j]) {
				swapped = true;
				tmp = cols[j];
				cols[j] = cols[j+1];
				cols[j+1] = tmp;
			}
			// print answer
			for (int i = 0; i < (int)n-1; i++) {
				std::cout << cols[i] << " ";
			}
			std::cout << cols[n-1] << std::endl;

		}
		swapped = false;
}

	// print answer
	for (int i = 0; i < (int)n-1; i++) {
		std::cout << cols[i] << " ";
	}
	std::cout << cols[n-1] << std::endl;
}
