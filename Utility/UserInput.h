//
// Created by ulver on 12/14/2022.
//

#ifndef TEXTBASEDRPG_USERINPUT_H
#define TEXTBASEDRPG_USERINPUT_H

#include <string>
#include <iostream>

auto getUserInput(const std::string& outputMessage);

auto getUserInput(const std::string& outputMessage) {
    std::cout << outputMessage;
    auto input = std::cin.get();
    return input;
}

#endif //TEXTBASEDRPG_USERINPUT_H
