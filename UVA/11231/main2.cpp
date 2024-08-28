#include <cstdio>
#include <iostream>

int main(int argc, char *argv[]) {
    int cols{}, rows{};
    bool white_corner = false;

    while (std::cin >> rows >> cols >> white_corner) {
        if (rows == 0 && cols == 0 && white_corner == 0)
            break;
        int valid_rows = rows - 7;
        int valid_cols = cols - 7;
        int cells = valid_cols * valid_rows;
        if (cells % 2 == 0 || !white_corner)
            std::cout << cells / 2 << '\n';
        else
            std::cout << cells / 2 + 1 << '\n';
    }
    return 0;
}
