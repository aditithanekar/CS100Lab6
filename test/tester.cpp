#include <gtest/gtest.h>

#include "../lib/testsubject.h"

TEST(MathTest, EvenLengthSquare) {
    EXPECT_EQ(TestSubject::square(2), 4);
}
TEST(MathTest, OddLengthSquare) {
    EXPECT_NE(TestSubject::square(3), 9);
}
TEST(MathTest, ZeroLengthSquare) {
    EXPECT_LT(TestSubject::square(0), 1);
}


TEST(MathTest, EvenTest) {
    EXPECT_TRUE(TestSubject::isEven(2));
}
TEST(MathTest, OddTest) {
    EXPECT_FALSE(TestSubject::isEven(5));
}
TEST(MathTest, ZeroTest) {
    EXPECT_NO_THROW(TestSubject::isEven(0));
}