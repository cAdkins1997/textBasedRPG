//
// Created by ulver on 12/14/2022.
//

#include "characterSheet.h"

#include <utility>

const std::string &characterSheet::getName() const {
    return name;
}

void characterSheet::setName(const std::string &name) {
    characterSheet::name = name;
}

int characterSheet::getStrength() const {
    return Strength;
}

void characterSheet::setStrength(int strength) {
    Strength = strength;
}

int characterSheet::getDexterity() const {
    return Dexterity;
}

void characterSheet::setDexterity(int dexterity) {
    Dexterity = dexterity;
}

int characterSheet::getConstitution() const {
    return Constitution;
}

void characterSheet::setConstitution(int constitution) {
    Constitution = constitution;
}

int characterSheet::getIntelligence() const {
    return Intelligence;
}

void characterSheet::setIntelligence(int intelligence) {
    Intelligence = intelligence;
}

int characterSheet::getWisdom() const {
    return Wisdom;
}

void characterSheet::setWisdom(int wisdom) {
    Wisdom = wisdom;
}

int characterSheet::getCharisma() const {
    return Charisma;
}

void characterSheet::setCharisma(int charisma) {
    Charisma = charisma;
}

int characterSheet::getHitPoints() const {
    return hitPoints;
}

void characterSheet::setHitPoints(int hitPoints) {
    characterSheet::hitPoints = hitPoints;
}

int characterSheet::getActionPoints() const {
    return actionPoints;
}

void characterSheet::setActionPoints(int actionPoints) {
    characterSheet::actionPoints = actionPoints;
}

int characterSheet::getArmourClass() const {
    return armourClass;
}

void characterSheet::setArmourClass(int armourClass) {
    characterSheet::armourClass = armourClass;
}

int characterSheet::getSpeed() const {
    return speed;
}

void characterSheet::setSpeed(int speed) {
    characterSheet::speed = speed;
}

const int *characterSheet::getLocation() const {
    return location;
}

characterSheet::characterSheet() {
    name = "some person";
    hitPoints = 1;
    Strength = 1;
    Dexterity = 1;
    Constitution = 1;
    Intelligence = 1;
    Wisdom = 1;
    Charisma = 1;

    inventory()
}

float characterSheet::calculateInventoryWeight(const std::vector<item>& items) {
    float weight = 0;
    for (auto & item : items) {
        weight = weight + item.getWeight();
    }
    return weight;
}

float characterSheet::getGoldPieces() const {
    return goldPieces;
}

void characterSheet::setGoldPieces(float goldPieces) {
    characterSheet::goldPieces = goldPieces;
}

int characterSheet::getStrengthMod() const {
    return strengthMod;
}

void characterSheet::setStrengthMod(int strengthMod) {
    characterSheet::strengthMod = strengthMod;
}

int characterSheet::getDexterityMod() const {
    return dexterityMod;
}

void characterSheet::setDexterityMod(int dexterityMod) {
    characterSheet::dexterityMod = dexterityMod;
}

int characterSheet::getConstitutionMod() const {
    return constitutionMod;
}

void characterSheet::setConstitutionMod(int constitutionMod) {
    characterSheet::constitutionMod = constitutionMod;
}

int characterSheet::getIntelligenceMod() const {
    return intelligenceMod;
}

void characterSheet::setIntelligenceMod(int intelligenceMod) {
    characterSheet::intelligenceMod = intelligenceMod;
}

int characterSheet::getWisdomMod() const {
    return wisdomMod;
}

void characterSheet::setWisdomMod(int wisdomMod) {
    characterSheet::wisdomMod = wisdomMod;
}

int characterSheet::getCharismaMod() const {
    return charismaMod;
}

void characterSheet::setCharismaMod(int charismaMod) {
    characterSheet::charismaMod = charismaMod;
}

int calculateAbilityMod(int abilityScore) {
    return abilityScore - 10 / 2;
}

void calculateAbilityModsEntire(characterSheet sheet) {
    sheet.setStrengthMod(calculateAbilityMod(sheet.getStrength()));
    sheet.setDexterityMod(calculateAbilityMod(sheet.getDexterity()));
    sheet.setConstitution(calculateAbilityMod(sheet.getConstitution()));
    sheet.setIntelligenceMod(calculateAbilityMod(sheet.getIntelligence()));
    sheet.setWisdomMod(calculateAbilityMod(sheet.getWisdom()));
    sheet.setCharismaMod(calculateAbilityMod(sheet.getCharisma()));
}

characterSheet::inventory::inventory(armour equippedArmour, weapon equippedWeapon)
        : equippedArmour(std::move(equippedArmour)), equippedWeapon(std::move(equippedWeapon)) {

}
