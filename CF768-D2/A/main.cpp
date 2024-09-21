#include <iostream>

int main (int argc, char *argv[]) {
    int n{};

    std::cin >> n;

    int min{100000000}, max{-1};
    int count{}, max_cnt{}, min_cnt{};
    for (; n > 0; n--) {
        int a{};
        std::cin >> a;

        if (a > max) {
            max = a;
            max_cnt = 1;
        } else if (a == max){
            max_cnt++;
        }
        if (a < min){
            min = a;
            min_cnt = 1;
        } else if (a == min){
            min_cnt++;
        }

        count++;
    }
    if ( max_cnt + min_cnt >= count)
        std::cout << 0 << '\n';
    else
        std::cout << count - max_cnt - min_cnt << '\n';


    return 0;
}
