#include <iostream>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t;
    std::cin >> t;
    while (t--) {
        int y, x;
        std::cin >> y >> x;
        const long long z = std::max(x, y);
        if (z % 2 == 1) {
            std::swap(x, y);
        }
        std::cout << (z * z - (x - 1) - (z - y)) << '\n';
    }
}