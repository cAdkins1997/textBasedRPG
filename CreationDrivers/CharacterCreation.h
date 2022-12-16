//
// Created by ulver on 12/14/2022.
//

#ifndef TEXTBASEDRPG_CHARACTERCREATION_H
#define TEXTBASEDRPG_CHARACTERCREATION_H

#include "characterSheet.h"
#include "../Utility/UserInput.h"

int calculateAbilityMod(int abilityScore);
int calculateAbilityModsEntire(characterSheet sheet);
void calculateStartingGold(characterSheet sheet);
void abilityScoreSelection(characterSheet sheet);

void initializeCreation() {
    auto* sheet = new characterSheet();
    sheet->setName(getUserInput("Please enter the name for the character: \n"));

    abilityScoreSelection(*sheet);
    calculateAbilityModsEntire(*sheet);

    calculateStartingGold(*sheet);
}

void abilityScoreSelection(characterSheet sheet) {
    sheet.setStrength(getUserInput("Please enter the value for the characters Strength: \n"));
    sheet.setDexterity(getUserInput("Please enter the value for the characters Dexterity: \n"));
    sheet.setConstitution(getUserInput("Please enter the value for the characters Constitution: \n"));
    sheet.setIntelligence(getUserInput("Please enter the value for the characters Intelligence: \n"));
    sheet.setWisdom(getUserInput("Please enter the value for the characters Wisdom: \n"));
    sheet.setCharisma(getUserInput("Please enter the value for the characters Charisma: \n"));
}

void calculateStartingGold(characterSheet sheet) {
    int input = getUserInput("Please input the level of wealth the character will start with: \n 0. For abject poverty"
                    "1. For poor \n2. average \n3. For above average \n4. For wealthy \n5. For a crime against humanity");
    switch(input) {
        default:
            sheet.setGoldPieces(0);
        case 1:
            sheet.setGoldPieces(100);
        case 2:
            sheet.setGoldPieces(500);
        case 3:
            sheet.setGoldPieces(1000);
        case 4:
            sheet.setGoldPieces(5000);
        case 5:
            sheet.setGoldPieces(10000);
    }
}

#endif //TEXTBASEDRPG_CHARACTERCREATION_H
