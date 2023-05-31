#include <gtest/gtest.h>
#include "../src/scrabble_score.cpp"

TEST(ScrabbleScoreTest, TestCabbage) {
    std::string word = "cabbage";
    std::string double_letters = "";
    bool triple_word = false;
    EXPECT_EQ(14, scrabble_score(word, double_letters, triple_word));
}

TEST(ScrabbleScoreTest, TestCabbageDoubleB) {
    std::string word = "cabbage";
    std::string double_letters = "b";
    bool triple_word = false;
    EXPECT_EQ(18, scrabble_score(word, double_letters, triple_word));
}

TEST(ScrabbleScoreTest, TestCabbageTripleWord) {
    std::string word = "cabbage";
    std::string double_letters = "";
    bool triple_word = true;
    EXPECT_EQ(42, scrabble_score(word, double_letters, triple_word));
}

TEST(ScrabbleScoreTest, TestZebraTripleZDoubleR) {
    std::string word = "zebra";
    std::string double_letters = "r";
    bool triple_word = true;
    EXPECT_EQ(102, scrabble_score(word, double_letters, triple_word));
}

