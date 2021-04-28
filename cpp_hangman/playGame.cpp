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
//beekeeper
//exodus
//affix
//khaki
//ivory
//disavow
//onyx
//lymph
// jazz



namespace play {

//Enums for readability when using the multidimensional array
    enum levelName {
        level_one,
        level_two,
        level_three,
        level_four,
        level_five,
        level_six,
        level_seven,
        level_eight,
        level_nine,
        level_ten
    };

    enum wordName {
        word_one,
        word_two,
        word_three,
        word_four,
        word_five,
        word_six,
        word_seven,
        word_eight,
        word_nine,
        word_ten
    };

    enum guessTemplate {
        template_one,
        template_two,
        template_three,
        template_four,
        template_five,
        template_six,
        template_seven,
        template_eight,
        template_nine,
        template_ten
    };


// Array to keep track of which levels have been completed.
    bool levels [10] {
                    false,
                    false,
                    false,
                    false,
                    false,
                    false,
                    false,
                    false,
                    false,
                    false};

// Array of arrays. Access entire word by using first set of square brackets. Access letter in a word by using second set of brackets.
    char words[10][10] {
                    "beekeeper",
                    "exodus",
                    "affix",
                    "khaki",
                    "ivory",
                    "disavow",
                    "qat",
                    "onyx",
                    "lymph",
                    "jazz"};

// Array of arrays. Access entire word by using first set of square brackets. Access letter in a word by using second set of brackets.
    char templates[10][10] {
                    "_________",
                    "______",
                    "_____",
                    "_____",
                    "_____",
                    "_______",
                    "___",
                    "____",
                    "_____",
                    "____"};

    void playGame() {
        
        
        // determine level
            //loop through array. Word based on
        // select word based on level
        // play
            // Receive input character
            // validate character
            // evaluate right or wrong - add to correct guess or wrong guess array, subtract life if required
            // check to remaining lives and correct guesses.
        
        int remainingLives {7};
        char guessedLetters[26] {};
        
        std::cout << "Lives: " << remainingLives << '\n';
        std::cout << "Guessed Letters: " << guessedLetters << '\n';
        std::cout << "Current Level: " << level_three + 1<< '\n';
        std::cout << "Current Word: " << words[word_one] <<'\n';
        std::cout << "Word Template: " << templates[template_one] << '\n';
   

    }

}
