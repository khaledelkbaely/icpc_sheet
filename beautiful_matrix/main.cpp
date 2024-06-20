#include <cstdlib>
#include <iostream>

int main() {
	int arr[5][5];
	int i, j;
	int moves = 0;

	for (i = 0; i < 5; i++)
		for (j = 0; j < 5; j++)
			std::cin >> arr[i][j];
	for (i = 0; i < 5; i++)
		for (j = 0; j < 5; j++)
			if (arr[i][j] == 1) {
				moves = abs(i - 2) + abs(j - 2);
				std::cout << moves;
			}
}
