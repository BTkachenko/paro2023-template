#include "gtest/gtest.h"
#include "../include/scrabble_score.hpp"

TEST(ScrabbleScoreTest, LowerCase) {
    EXPECT_EQ(scrabble_score("cabbage"), 14);
}

TEST(ScrabbleScoreTest, UpperCase) {
    EXPECT_EQ(scrabble_score("CABBAGE"), 14);
}

TEST(ScrabbleScoreTest, EmptyString) {
    EXPECT_EQ(scrabble_score(""), 0);
}

TEST(ScrabbleScoreTest, SingleLetter) {
    EXPECT_EQ(scrabble_score("a"), 1);
    EXPECT_EQ(scrabble_score("d"), 2);
    EXPECT_EQ(scrabble_score("b"), 3);
    EXPECT_EQ(scrabble_score("f"), 4);
    EXPECT_EQ(scrabble_score("k"), 5);
    EXPECT_EQ(scrabble_score("j"), 8);
    EXPECT_EQ(scrabble_score("q"), 10);
}
