#include <cstddef>
#include <cstdlib>
#include <iostream>

int main() {
	size_t nwires;
	std::cin >> nwires;
	int *wires = (int *)malloc(nwires * sizeof(int));

	for (int i = 0; i < (int)nwires; ++i)
		std::cin >> wires[i];

	int shots;
	std::cin >> shots;
	for (int i = 0; i < shots; ++i) {
		int x, y;
		std::cin >> x >> y;

		// add y-1 to wires[x-2]
		if (x - 2 >= 0)
			wires[x-2] += y - 1;
		// add wires[x-1] - y  to wires[x]
		if (x < (int)nwires)
			wires[x] += wires[x-1] - y;
		wires[x-1] = 0;
	}

	for (int i = 0; i < (int)nwires; ++i)
		std::cout << wires[i] << '\n';
}
