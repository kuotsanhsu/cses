#include <algorithm>
#include <iostream>
#include <map>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    std::string s;
    std::cin >> s;
    std::map<char, int> counts;
    for (const auto ch : s) {
        counts[ch]++;
    }
    auto odd_counts = 0;
    for (const auto [_, count] : counts) {
        if (count % 2 == 1) {
            ++odd_counts;
        }
    }
    if (odd_counts > 1) {
        std::cout << "NO SOLUTION";
        return 0;
    }
    auto start = s.begin(), end = s.end();
    for (const auto [ch, count] : counts) {
        if (count % 2 == 1) {
            const auto start = s.begin() + (s.length() - count) / 2;
            std::fill(start, start + count, ch);
        } else {
            const auto length = count / 2;
            std::fill(start, start + length, ch);
            start += length;
            std::fill(end - length, end, ch);
            end -= length;
        }
    }
    std::cout << s;
}