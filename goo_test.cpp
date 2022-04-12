#include <gtest/gtest.h>
#include "goo.h"


// 
TEST(GooTest, TestGetValueWithPositive) {
  EXPECT_EQ(getValue(5, 5), 25);
}

// 
TEST(GooTest, TestGetValueWithAPositive) {
  EXPECT_EQ(getValue(5, 0), 5);
}

// 
TEST(GooTest, TestGetValueWithZero) {
  EXPECT_EQ(getValue(0, 5), 0);
}