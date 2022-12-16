//
// Created by ulver on 12/14/2022.
//

#ifndef TEXTBASEDRPG_MAINMENU_H
#define TEXTBASEDRPG_MAINMENU_H

#include <iostream>
#include "../Utility/UserInput.h"
#include "../CreationDrivers/CharacterCreation.h"

void mainMenu() {
    std::cout << "- M A I N  M E N U -";
    int selection = getUserInputInt("Please enter which option what you would like to do: \n"
                                    "1. for a New Game\n5. to quit");
    switch (selection) {
        case 1:
            initializeCreation();
        case 5:
            return;
    }
}

#endif //TEXTBASEDRPG_MAINMENU_H
