#include <Algorithm>
#include <stdexcept>
#include <vector>
#include "gtest/gtest.h"
#include "../src/minimum.hpp"


class ArrayTest : public ::testing::Test{
	protected:
		virtual void SetUp() {}
		virtual void TearDown() {}
};

TEST(ArrayTest, TestEmptyArray) {
	std::vector<int> arr;
	EXPECT_THROW(MinimumIndex(arr), std::invalid_argument);
}

TEST(ArrayTest, GetMinimumIndex) {
	std::vector<int> arr = {3, 2, 1, 4, 5};
	EXPECT_EQ(MinimumIndex(arr), std::min_element(arr.begin(), arr.end()) - arr.begin());
}

TEST(ArrayTest, GetFirstMinimumIndex) {
	std::vector<int> arr = {3, 2, 1, 4, 5, 1};
	EXPECT_EQ(MinimumIndex(arr), std::min_element(arr.begin(), arr.end()) - arr.begin());
}	