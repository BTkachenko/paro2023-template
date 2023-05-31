

// scrabble_score.cpp
#include "../include/scrabble_score.hpp"

int scrabble_score(const std::string& word) {
    static const int scores[26] = {
        1, 3, 3, 2, 1, 4, 2, 4, 1, 8,
        5, 1, 3, 1, 1, 3, 10, 1, 1, 1,
        1, 4, 4, 8, 4, 10
    };

    int total = 0;
    for (char c : word) {
        if (c >= 'A' && c <= 'Z') {
            total += scores[c - 'A'];
        } else if (c >= 'a' && c <= 'z') {
            total += scores[c - 'a'];
        }
    }
    return total;
}
