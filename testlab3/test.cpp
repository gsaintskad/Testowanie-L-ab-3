#include "gtest/gtest.h"
#include "../product/fizzbuzz.h"

TEST(FizzBuzzTest, DivideBy3) {
  EXPECT_EQ(fizzbuzz(3), "3");
  EXPECT_EQ(fizzbuzz(66), "3");
  EXPECT_EQ(fizzbuzz(93), "3");
}

TEST(FizzBuzzTest, DivideBy5) {
	EXPECT_EQ(fizzbuzz(25), "5");
	EXPECT_EQ(fizzbuzz(65), "5");
	EXPECT_EQ(fizzbuzz(95), "5");
}
TEST(FizzBuzzTest, FizzBuzzResult) {
	EXPECT_EQ(fizzbuzz(45), "fizzbuzz");
	EXPECT_EQ(fizzbuzz(15), "fizzbuzz");
	EXPECT_EQ(fizzbuzz(300), "fizzbuzz");
}
TEST(FizzBuzzTest, NULLResult) {
	EXPECT_EQ(fizzbuzz(42358), "NULL");
	EXPECT_EQ(fizzbuzz(1547), "NULL");
	EXPECT_EQ(fizzbuzz(3007), "NULL");
}