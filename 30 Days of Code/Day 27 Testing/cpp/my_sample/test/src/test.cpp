#include <iostream>
#include "../../src/add.hpp"
#include "gtest/gtest.h"
using namespace std;

class AdditionTest : public ::testing::Test
{
	protected:
		virtual void SetUp() {}
		virtual void TearDown() {}
};

TEST(AdditionTest, AddTwo) {
	int x = 4;
	int y = 5;
	Addition add;
	EXPECT_EQ(9, add.AddTwo(x, y));
	EXPECT_EQ(5, add.AddTwo(2, 3));
}
