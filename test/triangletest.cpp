#include <gtest/gtest.h>
#include "../lib/Triangle.h"
using shapes::Triangle;

TEST(TriangleTests, invalidInput){// expect death
    EXPECT_DEATH(new Triangle(2,1,5), "First side is not the longest");
}
TEST(TriangleTests, validInput){ //working
    EXPECT_NO_THROW(new Triangle(4,3,2));
}
TEST(TriangleTests, zeroInvalidInput){ //working
    EXPECT_DEATH(new Triangle(0,3,2), "First side is not the longest");
}


TEST(TriangleTests, testEquilateral) {
    Triangle *aTriangle = new Triangle(3,3,3);
    EXPECT_TRUE(aTriangle->isEquilateral());
}
TEST(TriangleTests, testNotEquilateral) {
    Triangle *aTriangle = new Triangle(3,3,2);
    EXPECT_FALSE(aTriangle->isEquilateral());
}
TEST(TriangleTests, testAnotherEquilateral) {
    Triangle *aTriangle = new Triangle(90,90,90);
    EXPECT_NO_THROW(aTriangle->isEquilateral());
}

// not working
TEST(TriangleTests, testPerimeter) {
    Triangle *aTriangle = new Triangle(4,3,4);
    EXPECT_EQ(aTriangle->getPerimeter(),11);
}

TEST(TriangleTests, perimeterCheck){
    Triangle *newTriangle = new Triangle(3,3,3);
    EXPECT_GT(newTriangle->getPerimeter(), 8);
}

TEST(TriangleTests, wrongPerimeterCheck){
    Triangle *newTriangle = new Triangle(3,3,3);
    EXPECT_NE(newTriangle->getPerimeter(), 8);
}



TEST(TriangleTests, testArea){
    Triangle *newTriangle = new Triangle(7,6,7);
    EXPECT_NEAR(newTriangle->getArea(), 18.97, 0.01);
}
TEST(TriangleTests, areaCheck){
    Triangle *newTriangle = new Triangle(4,4,4);
    EXPECT_NE(newTriangle->getArea(), 9.93);
}
TEST(TriangleTests, areaCheckBIG){
    Triangle *newTriangle = new Triangle(100,80,60);
    EXPECT_EQ(newTriangle->getArea(), 2400);
}


TEST(TriangleTests, testIsosceles) {
    Triangle *aTriangle = new Triangle(3,2,2);
    EXPECT_TRUE(aTriangle->isIsosceles());
}
TEST(TriangleTests, testNotIsosceles) {
    Triangle *aTriangle = new Triangle(3,3,3);
    EXPECT_FALSE(aTriangle->isIsosceles());
}
TEST(TriangleTests, skinnyIsosceles) {
    Triangle *aTriangle = new Triangle(1000,1000,3);
    EXPECT_NO_THROW(aTriangle->isIsosceles());
}


TEST(TriangleTests, testTypes){
    Triangle *newTriangle = new Triangle(6,6,6);
    EXPECT_NE(newTriangle->getKind(), Triangle::Kind::ISOSCELES);
}
TEST(TriangleTests, typeCheck){
    Triangle *newTriangle = new Triangle(5,5,3);
    EXPECT_EQ(newTriangle->getKind(), Triangle::Kind::ISOSCELES);
}
TEST(TriangleTests, bigtypeCheck){
    Triangle *newTriangle = new Triangle(1000,600,800);
    EXPECT_TRUE(newTriangle->getKind()==Triangle::Kind::SCALENE);
}

