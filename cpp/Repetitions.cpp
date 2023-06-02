#include <iostream>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    std::string dna;
    std::cin >> dna;
    auto max_rep_len = 0;
    auto rep_len = 0;
    auto prev = '\0';
    for (const auto nucleotide : dna) {
        if (prev != nucleotide) {
            max_rep_len = std::max(max_rep_len, rep_len);
            rep_len = 1;
        } else {
            ++rep_len;
        }
        prev = nucleotide;
    }
    max_rep_len = std::max(max_rep_len, rep_len);
    std::cout << max_rep_len;
}