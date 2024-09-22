#include <iostream>
#include <iterator>
#include <vector>
#include <queue>
#include <algorithm>

int main() {
	std::cin.tie(nullptr)->sync_with_stdio(false);
	auto ints = std::istream_iterator<int>(std::cin);

	std::vector<int> direct_boss(*ints);
	std::vector<int> direct_subordinate_count(direct_boss.size());
	std::ranges::copy(std::ranges::istream_view(std::cin),
		std::next(direct_boss.begin()),
		[&direct_subordinate_count](int b) {
			++direct_subordinate_count[--b];
			return b;
		}
	);
	std::queue<int> frontier;
	for (auto b = 0; const auto count : direct_subordinate_count) {
		if (count == 0) {
			frontier.push(b);
		}
		++b;
	}
	auto subordinate_count = direct_subordinate_count;
	for (; !frontier.empty(); frontier.pop()) {
		const auto e = frontier.front();
		if (e == 0) {
			continue;
		}
		const auto b = direct_boss[e];
		subordinate_count[b] += subordinate_count[e];
		if (--direct_subordinate_count[b] == 0) {
			frontier.push(b);
		}
	}
	std::ranges::copy(subordinate_count, std::ostream_iterator<int>(std::cout, " "));
}
