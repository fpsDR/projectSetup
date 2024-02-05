#include <gtest/gtest.h>
#include "sum.h"

// Test case for summing positive numbers
TEST(SumTest, PositiveNumbers) {
    std::vector<int> numbers = {1, 2, 3, 4, 5};
    int result = sum(numbers);
    EXPECT_EQ(result, 15);
}

// Test case for summing negative numbers
TEST(SumTest, NegativeNumbers) {
    std::vector<int> numbers = {-1, -2, -3, -4, -5};
    int result = sum(numbers);
    EXPECT_EQ(result, -15);
}

// Test case for summing mixed positive and negative numbers
TEST(SumTest, MixedNumbers) {
    std::vector<int> numbers = {-2, 5, -8, 10, -12};
    int result = sum(numbers);
    EXPECT_EQ(result, -7);
}

// Test case for summing an empty vector
TEST(SumTest, EmptyVector) {
    std::vector<int> numbers;
    int result = sum(numbers);
    EXPECT_EQ(result, 0);
}