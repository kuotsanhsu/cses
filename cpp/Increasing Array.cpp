#include <iostream>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n;
    std::cin >> n;
    long long moves = 0;
    for (int prev = 0, x; n--; prev = std::max(prev, x)) {
        std::cin >> x;
        moves += std::max(0, prev - x);
    }
    std::cout << moves;
}