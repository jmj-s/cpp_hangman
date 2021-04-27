//
//  validation.cpp
//  cpp_hangman
//
//  Created by Stuart Weiss on 4/27/21.
//

#include "validation.hpp"

#include <iostream>
#include <limits>
namespace validation {

    void ignoreLine(){
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }

}
