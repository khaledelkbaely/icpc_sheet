#include <iostream>

using namespace std;

int main() {
	int games = 0;
	int i, anton, danik;
	char game;

	cin >> games;

	i = anton = danik = 0;
	for (i = 0; i < games; i++) {
		cin >> game;
		if (game == 'A')
			anton++;
		else
			danik++;
	}
	if (anton > danik)
		cout << "Anton";
	else if (danik > anton)
		cout << "Danik";
	else
		cout << "Friendship";
}
