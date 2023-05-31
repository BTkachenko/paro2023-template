// scrabble_score.cpp
#include "../include/scrabble_score.hpp"

int scrabble_score(const std::string& word, const std::string& double_letters, bool triple_word) {
    static const std::unordered_map<char, int> letter_values = {
        {'a', 1}, {'e', 1}, {'i', 1}, {'o', 1}, {'u', 1}, {'l', 1}, {'n', 1}, {'r', 1}, {'s', 1}, {'t', 1},
        {'d', 2}, {'g', 2},
        {'b', 3}, {'c', 3}, {'m', 3}, {'p', 3},
        {'f', 4}, {'h', 4}, {'v', 4}, {'w', 4}, {'y', 4},
        {'k', 5},
        {'j', 8}, {'x', 8},
        {'q', 10}, {'z', 10}
    };

    int total = 0;
    for (char c : word) {
        char lower_c = std::tolower(c);
        if (letter_values.count(lower_c)) {
            int letter_score = letter_values.at(lower_c);
            if (double_letters.find(lower_c) != std::string::npos) {
                letter_score *= 2;
            }
            total += letter_score;
        }
    }

    if (triple_word) {
        total *= 3;
    }

    return total;
}

