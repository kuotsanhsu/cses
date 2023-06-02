#include <iostream>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n;
    std::cin >> n;
    if (n == 2 || n == 3) {
        std::cout << "NO SOLUTION";
        return 0;
    }
    for (auto i = 2; i <= n; i += 2) {
        std::cout << i << ' ';
    }
    std::cout << '1';
    for (auto i = 3; i <= n; i += 2) {
        std::cout << ' ' << i;
    }
}