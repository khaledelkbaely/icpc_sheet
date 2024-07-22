#include <algorithm>
#include <cstddef>
#include <iostream>
#include <vector>


int main() {
	int n{};
	std::cin >> n;

	std::vector<int> pr_skill;
	std::vector<int> m_skill;
	std::vector<int> pe_skill;

	for (int i = 1; i <= n; i++) {
		int cskill{};
		std::cin >> cskill;

		switch (cskill) {
			// Programming
			case 1:
				pr_skill.push_back(i);
				break;
			// Math
			case 2:
				m_skill.push_back(i);
				break;
			// PE
			case 3:
				pe_skill.push_back(i);
				break;
		}
	}

	std::size_t nteams = std::min({pr_skill.size(), m_skill.size(), pe_skill.size()});
	std::cout << nteams << '\n';
	for (std::size_t i = 0; i < nteams; i++) {
		std::cout << pr_skill.back()
			  << ' ' << m_skill.back()
			  << ' ' << pe_skill.back()
			  << '\n';
		pr_skill.pop_back();
		m_skill.pop_back();
		pe_skill.pop_back();
	}
}
