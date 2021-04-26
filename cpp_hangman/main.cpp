//
//  main.cpp
//  cpp_hangman
//
//  Created by Stuart Weiss on 4/25/21.
//



// User Defined
#include "welcomeUser.hpp" //Imports welcome functions.

// Third Party Libraries


// Standard Libraries
#include <iostream>
#include <limits>
#include <iomanip>


int main() {
    
    welcome::playerReady();
    
    std::cout << "Press any key to exit.";
    std::cin.clear(); // reset any error flags
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // ignore any characters in the input buffer until we find an enter character
    std::cin.get(); // get one more char from the user
    
    std::cout << "Goodbye.\n";
    
    
    return 0;
}
