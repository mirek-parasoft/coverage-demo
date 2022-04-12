#include <gtest/gtest.h>
#include "goo.h"

// 
TEST(GooTest, TestGetValueWithZero) {
  EXPECT_EQ(getValue(0, 0), 0);
}

// 
TEST(GooTest, TestGetValueWithPositive) {
  EXPECT_EQ(getValue(5, 5), 25);
}

// 
TEST(GooTest, TestGetValueWithAPositive) {
  EXPECT_EQ(getValue(5, 0), 5);
}
