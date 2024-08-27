#include <cstdio>
#include <iostream>
#include <string>

std::string minus_strings(std::string s1, std::string s2);
std::string add_strings(std::string s1, std::string s2);
std::string multiply_strings(std::string s1, std::string s2);


int main(int argc, char *argv[]) {
    std::string n1, n2;

    while (std::cin >> n1 >> n2) {
        std::cout << multiply_strings(n1, n2) << std::endl;
    }
    return 0;
}

std::string reverse(std::string s) {
    std::string rev{};
    auto i1 = s.cend()-1;
    for (; i1 >= s.cbegin(); i1--) {
        rev.push_back(*i1);
    }
    return rev;
}

/* Return s 9's compliment */
std::string compliment(std::string s) {
    std::string comp{};
    for (char c : s) {
        int i = c - '0';
        comp.push_back(9-i+'0');
    }
    return comp;
}
/* Assume s1 > s2 return s1 - s2 */
std::string minus_strings(std::string s1, std::string s2) {

    s2.insert(0, s1.size() - s2.size(), '0');
    std::string result =  add_strings(add_strings(s1, compliment(s2)), "1").substr(1);
    int zeroInFront = 0;
    for (char c : result) {
        if (c == '0')
            zeroInFront++;
        else
            break;
    }
    result = result.substr(zeroInFront);
    return result.empty() ? "0" : result;
}
std::string add_strings(std::string s1, std::string s2) {
    int carry = 0;
    std::string s3{};

    if (s2.size() > s1.size())
        return add_strings(s2, s1);

    std::string::const_iterator i1 =  s1.cend()-1, i2 = s2.cend()-1;
    for (; i2 != s2.cbegin() - 1; i1--, i2--) {
        int a = *i1 - '0';
        int b = *i2 - '0';
        s3.push_back((a+b+carry)%10 + '0');
        if (a+b+carry > 9)
            carry = 1;
        else
            carry = 0;
    }
    for (;i1 != s1.cbegin()-1; i1--) {
        int a = *i1 - '0';
        s3.push_back((a+carry)%10 + '0');
        if (a+carry > 9)
            carry = 1;
        else
            carry = 0;
    }
    if (carry)
        s3.push_back(carry+'0');
    return reverse(s3);
}

/*
* 9 * 9 = 81
* 99 * 9 = (90 + 9) * 9 = 9 * 9 * 10 + 9 * 9
* 999 * 9 = (900 + 90 + 9) * 9 = 9*9*100 + 9*9*10 + 9*9
* 99 * 99 = 99 * 9 * 10 + 99 * 9
* 999 * 99 = 999 * 9 * 10 + 999 * 9
*/
std::string multiply_strings(std::string s1, std::string s2) {
    if (s2.size() > s1.size())
        return multiply_strings(s2, s1);
    if (s2.size() == 1) {
        std::string result{"0"};

        int scale = 0;
        int i2 = std::stoi(s2);
        for (auto it1 = s1.end()-1; it1 != s1.begin() - 1; it1--) {
            int nd = *it1 - '0';
            int res = nd * i2;

            result = add_strings(std::to_string(res).append(scale, '0'), result);

            scale++;
        }
        return result;
    } else {
        std::string result{"0"};
        int scale = 0;
        for (auto it2 = s2.end()-1; it2 != s2.begin() - 1; it2--) {
            std::string res = multiply_strings(s1, std::to_string(*it2 - '0'));

            result = add_strings(res.append(scale, '0'), result);

            scale++;
        }
        return result;
    }
}
