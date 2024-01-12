#include "../src/Problems.hpp"
#include "Data.hpp"
#include <algorithm>
#include <folly/portability/GTest.h>
#include <ranges>

TEST(IntroductoryProblems, WeirdAlgorithm) {
  using namespace IntroductoryProblems;
  for (const auto [input, expected_output] : std::views::zip(
           WeirdAlgorithmData::inputs, WeirdAlgorithmData::expected_outputs)) {
    EXPECT_TRUE(std::ranges::equal(WeirdAlgorithm(input), expected_output));
  }
}
