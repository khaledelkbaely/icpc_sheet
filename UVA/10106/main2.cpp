#include <iostream>
#include <string>
#include <vector>


int main(int argc, char *argv[]) {
    std::string n1, n2;

    while (std::cin >> n1 >> n2) {
        std::vector<int> nums_reversed(300);

        for (int i = 0; i < n1.size(); i++) {
            for (int j = 0; j < n2.size(); j++) {
                nums_reversed[i+j] += (n1[i] - '0') * (n2[j] - '0');
            }
        }

        for (int i = 0; i < nums_reversed.capacity(); i++) {
            nums_reversed[i+1] += nums_reversed[i] / 10;
            nums_reversed[i] %= 10;
        }

        auto it = nums_reversed.end()-1;
        while (it != nums_reversed.begin()-1 && *it == 0) it--;
        while (it != nums_reversed.begin()-1) std::cout << *it--;

        std::cout << std::endl;

    }
    return 0;
}
