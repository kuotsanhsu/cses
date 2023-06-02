#include <iostream>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n;
    std::cin >> n;
    std::cout << "0\n";
    if (n > 1) {
        std::cout << "6\n";
    }
    long long configs = 6;
    for (auto k = 3; k <= n; ++k) {
        const long long j = k - 1, l = k + j;
        // configs += l * (j * j) + l * (l - 1) / 2 - 2 - (2 + 2 * 2 * (j - 1 + j - 2));
        configs += l * (j * j) + l * (l - 1) / 2 - 8 * (j - 1);
        std::cout << configs << '\n';
    }
}