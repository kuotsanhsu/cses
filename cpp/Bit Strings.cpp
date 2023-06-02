#include <iostream>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    constexpr long long MOD = 1e9 + 7;

    int n;
    std::cin >> n;
    long long m = 1;
    // 2^(2^(k+1)) = 2^(2 * 2^k) = (2^(2^k))^2 and 2^(2^0) = 2
    for (long long pow2 = 2; n != 0; pow2 = pow2 * pow2 % MOD) {
        if (n % 2 == 1) {
            m = m * pow2 % MOD;
        }
        n /= 2;
    }
    std::cout << m;
}