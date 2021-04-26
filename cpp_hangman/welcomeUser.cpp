//
//  welcomeUser.cpp
//  cpp_hangman
//
//  Created by Stuart Weiss on 4/25/21.
//

#include "welcomeUser.hpp"

#include <iostream>
namespace welcome {

    bool playerReady() {
        
        bool ready {false};
        
        while (!ready) {
            
            std::cout << "Do you want to play a game? (y/n)\n";
            char playerReply {};
            std::cin >> playerReply;
            
            if (playerReply == 'y') {
                std::cout << "Okay, let's do this!\n";
                ready = true;
                break;
            } else if (playerReply == 'n') {
                std::cout << "Too bad :(\n";
                break;
            } else {
                std::cout << "Let's try this again... This time just press 'y' or 'n'...\n";
            }
        }
        
        std::cout << "Ready status: " << ready << '\n';
        return ready;
    }

}

