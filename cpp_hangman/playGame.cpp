//
//  playGame.cpp
//  cpp_hangman
//
//  Created by Stuart Weiss on 4/25/21.
//

#include "playGame.hpp"

#include <iostream>

// Levels
// Words

bool levels [10] = {false, false, false, false, false, false, false, false, false, false};

std::string words [10] {"a", "ab", "abc", "abcd", "abcde", "abcdef", "abcdefg", "abcdefgh", "abcdefghi", "abcdefghij"};
