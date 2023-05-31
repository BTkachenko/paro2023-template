#include "gtest/gtest.h"
#include "day-of-year.hpp"

struct DayOfYearTestSuite {};

TEST(DayOfYearTestSuite, dummyTest)
{
  ASSERT_TRUE(false);
}

TEST(DayOfYearTestSuite, January1stIsFitstDayOfYear)
{
  ASSERT_EQ(dayOfYear(1, 1, 2020), 1);
}

TEST(DayOfYearTest, StartOfMonth) {
  EXPECT_EQ(dayOfYear(2, 1, 2023), 32);  // February
  EXPECT_EQ(dayOfYear(3, 1, 2023), 60);  // March
  EXPECT_EQ(dayOfYear(4, 1, 2023), 91);  // April
}

TEST(DayOfYearTest, LeapYear) {
  EXPECT_EQ(dayOfYear(2, 29, 2024), 60);  // 2024 is a leap year
}


TEST(DayOfYearTest, EndOfYear) {
  EXPECT_EQ(dayOfYear(12, 31, 2023), 365);  // 2023 is not a leap year
  EXPECT_EQ(dayOfYear(12, 31, 2024), 366);  // 2024 is a leap year
}