//
//  welcomeUser.cpp
//  cpp_hangman
//
//  Created by Stuart Weiss on 4/25/21.
//

#include "welcomeUser.hpp"
#include "validation.hpp"

#include <iostream>



namespace welcome {

    bool playerReady() {
        
    bool ready {false};
        
        while (!ready) {
            
            try {
                
                std::cout << "Do you want to play a game? (y/n)\n";
                std::string playerReply {};
                std::getline(std::cin >> std::ws, playerReply);
//                validation::ignoreLine();
//                std::cout << playerReply;
                
                if (playerReply != "y" && playerReply != "n") {
                    
                    throw(playerReply);

                } else if (playerReply == "y") {
                    
                    std::cout << "Okay, let's do this!\n";
                    ready = true;
                    break;
                    
                } else if (playerReply == "n") {
                    
                    std::cout << "Too bad :(\n";
                    break;
                    
                }
            }
            catch(std::string cReply){
                std::cout << "You entered: '" << cReply << "'. This time just press 'y' or 'n'...\n" ;
            }
        }
        
        return ready;
    }

}

