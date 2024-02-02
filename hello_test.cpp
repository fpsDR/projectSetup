#include <gtest/gtest.h>

// Demonstrate some basic assertions.
TEST(HelloTest, BasicAssertions) {
  // Expect two strings not to be equal.
  EXPECT_STRNE("hello", "world");
  // Expect equality.
  EXPECT_EQ(7 * 6, 42);
}

// Test case to demonstrate more assertions, including some that fail intentionally
TEST(ExtendedAssertionsTest, ExtendedAssertions) {
    // Expect equality.
    EXPECT_EQ(4 + 3, 7);
    // Expect inequality.
    EXPECT_NE(10, 5);
    // Expect a condition to be true.
    EXPECT_TRUE(5 > 3);
    // Expect a condition to be false.
    EXPECT_FALSE(7 < 3);

}

// Test case to demonstrate failing assertions
TEST(FailingAssertionsTest, FailingAssertions) {
    // These assertions should fail intentionally
    EXPECT_EQ(1 + 2, 5);  // Should fail because 1 + 2 is not equal to 5
    EXPECT_GT(5, 10);     // Should fail because 5 is not greater than 10
    EXPECT_TRUE(2 == 3);  // Should fail because the condition is false
}