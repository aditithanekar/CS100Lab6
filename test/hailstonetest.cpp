#include <gtest/gtest.h>
#include "../lib/Hailstone.h"
using sequence::satisfiesHailstone;

TEST(HailstoneTests, satisfyHailstoneZeroFalse)
{
    bool result = sequence::satisfiesHailstone(0);
    EXPECT_FALSE(result);
}
TEST(HailstoneTests, satisfyHailstoneOne)
{
    EXPECT_NO_THROW(sequence::satisfiesHailstone(1));
}
TEST(HailstoneTests, satisfyHailstoneEven)
{
    bool result = sequence::satisfiesHailstone(28);
    EXPECT_TRUE(result);
}
TEST(HailstoneTests, satisfyHailstoneOdd)
{
    bool result = sequence::satisfiesHailstone(7);
    EXPECT_TRUE(result);
}
