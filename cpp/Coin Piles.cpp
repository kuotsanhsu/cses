#include <iostream>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t;
    std::cin >> t;
    while (t--) {
        int a, b;
        std::cin >> a >> b;
        if (a < b) {
            std::swap(a, b);
        }
        const auto c = b - (a - b);
        std::cout << (c >= 0 && c % 3 == 0 ? "YES\n" : "NO\n");
    }
}
