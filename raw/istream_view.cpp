#include <iostream>
#include <iterator>
#include <ranges>

int main() {
    auto ints = std::istream_iterator<int>(std::cin);
    std::cout << *ints++ << "\n"
              << *ints++ << "\n";
    for (const auto x : std::views::counted(ints, 3)) {
        std::cout << x << " ";
    }
    std::cout << "\n";
    for (const auto x : std::views::counted(ints, 3)) {
        std::cout << x << " ";
    }
    std::cout << "\n";
    for (const auto x : std::ranges::subrange(ints, std::istream_iterator<int>{})) {
        std::cout << x << " ";
    }
    std::cout << "\n";
    // for (const auto x : ints | std::views::take(2)) {
    //     std::cout << x << " ";
    // }
    // std::cout << "\n"
    //           << *ints.begin() << "\n";
}