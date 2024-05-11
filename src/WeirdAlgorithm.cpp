#include "Problems.hpp"

// [[expects: 1 <= m && m <= 1e6]]
std::generator<int_fast64_t>
IntroductoryProblems::WeirdAlgorithm(int_fast32_t n) {
  int_fast64_t m = n;
  for (co_yield m; m != 1; co_yield m) {
    if (m % 2 == 0) {
      m /= 2;
    } else {
      m = m * 3 + 1;
    }
  }
}