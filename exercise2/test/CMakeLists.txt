add_executable(ScrabbleScoreTest
        scrabble_score_test.cpp)

target_link_libraries (ScrabbleScoreTest PUBLIC ScrabbleScore gtest_main)

add_test(NAME ScrabbleScore
        COMMAND ScrabbleScoreTest --gtest_output=xml:${CMAKE_BINARY_DIR}/junit/exercise1.junit.xml)