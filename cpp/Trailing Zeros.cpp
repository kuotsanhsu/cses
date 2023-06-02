#include <cmath>
#include <iostream>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n;
    std::cin >> n;
    long long ans = 0;
    while (n /= 5) {
        ans += n;
    }
    std::cout << ans;
}