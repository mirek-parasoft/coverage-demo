#include <gtest/gtest.h>
#include "goo.h"

// 
TEST(GooTest, TestGetValueWithPositive) {
  EXPECT_EQ(getValue(6, 6), 36);
}

// 
TEST(GooTest, TestGetValueWithMixed_1) {
   EXPECT_EQ(getValue(0, 4), 0);
}

// 
TEST(GooTest, TestGetValueWithZero) {
   EXPECT_EQ(getValue(0, 0), 0);
}


// // 
// TEST(GooTest, TestGetValueWithMixed_2) {
//   EXPECT_EQ(getValue(0, 6), 0);
// }
