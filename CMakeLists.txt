cmake_minimum_required(VERSION 3.23)
project(textBasedRPG)

set(CMAKE_CXX_STANDARD 23)

add_executable(textBasedRPG main.cpp CreationDrivers/characterSheet.cpp CreationDrivers/characterSheet.h CreationDrivers/CharacterCreation.h Utility/UserInput.h Items/item.cpp Items/item.h Items/weapon.cpp Items/weapon.h Menu/MainMenu.h Items/armour.cpp Items/armour.h)
