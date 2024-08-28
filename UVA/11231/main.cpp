#include <cstdio>
#include <iostream>

int main (int argc, char *argv[]) {
    int cols{}, rows{};
    bool white_corner = false;

    while (std::cin >> rows >> cols >> white_corner) {
        if (rows == 0 && cols == 0 && white_corner == 0)
            break;
        int count = 0;
        int in_cols_white = 0;
        int in_cols_black = 0;
        for (int i = cols; i >= 8; i -= 2)
            in_cols_white++;
        for (int i = cols-1; i >= 8; i -= 2)
            in_cols_black++;

        for (int i = rows; i >= 8; i--) {
            if (white_corner)
                count += in_cols_white;
            else
                count += in_cols_black;
        }
        std::cout << count << '\n';
    }

    return 0;
}
