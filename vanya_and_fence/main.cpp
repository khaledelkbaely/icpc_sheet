#include <iostream>

using namespace std;


int main() {
	int friends, fence_height, min_width = 0, i;
	int friend_height;

	cin >> friends >> fence_height;
	for (i = 0; i < friends; i++){
		cin >> friend_height;
		if (friend_height > fence_height)
			min_width++;
		min_width++;
	}
	cout << min_width << endl;
}
