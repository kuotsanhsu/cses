#include <cstddef>
#include <iostream>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    unsigned n;
    std::cin >> n;
    unsigned missing_number = 1;
    for (unsigned i = 2; i <= n; ++i) {
        unsigned j;
        std::cin >> j;
        missing_number ^= i ^ j;
    }
    std::cout << missing_number;
}