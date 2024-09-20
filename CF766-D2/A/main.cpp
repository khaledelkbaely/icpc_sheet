#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

std::vector<std::string> subseqs(std::string s);

int main(int argc, char *argv[]) {
    std::string a, b;

    std::cin >> a >> b;

    if (a != b)
      std::cout << std::max(a.size(), b.size()) << '\n';
    else
      std::cout << -1 << '\n';

    return 0;
}

/*std::vector<std::string> subseqs(std::string s) {*/
/*  std::vector<std::string> result;*/
/**/
/*  if (s.empty()) {*/
/*    return {""};*/
/*  }*/
/**/
/*  std::vector<std::string> rest = subseqs(s.substr(1));*/
/**/
/*  for (std::string str : rest) {*/
/*    result.push_back(str);*/
/*  }*/
/**/
/*  char ch = s[0];*/
/*  for (std::string str : rest) {*/
/*    str.insert(0, 1, ch);*/
/*    result.push_back(str);*/
/*  }*/
/**/
/*  return result;*/
/*}*/
