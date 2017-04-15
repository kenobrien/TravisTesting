#include "arithmetic.hpp"
#include "gtest/gtest.h"

TEST(Arithmetic, IntAdd) {
	ASSERT_EQ(add(3,7), 10);
}

TEST(Arithmetic, FloatAdd) {
	ASSERT_EQ(add(3.0f,7.0f), 10.0f);
}

TEST(Arithmetic, DoubleAdd) {
	ASSERT_EQ(add(3.0,7.0), 10.0);
}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
