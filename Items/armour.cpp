//
// Created by ulver on 12/15/2022.
//

#include "armour.h"

armour::armour(const std::string &name, const std::string &rarity, float weight, float cost, const std::string &name1,
               const std::string &armourCategory, const std::string &armourGroup, int armourClassBonus,
               int dexterityCap, int strengthRequirement, int armourCheckPenalty, int speedPenalty, int bulk) : item(
        name, rarity, weight, cost), name(name1), armourCategory(armourCategory), armourGroup(armourGroup),
                                                                                                                armourClassBonus(
                                                                                                                        armourClassBonus),
                                                                                                                dexterityCap(
                                                                                                                        dexterityCap),
                                                                                                                strengthRequirement(
                                                                                                                        strengthRequirement),
                                                                                                                armourCheckPenalty(
                                                                                                                        armourCheckPenalty),
                                                                                                                speedPenalty(
                                                                                                                        speedPenalty),
                                                                                                                bulk(bulk) {}

const std::string &armour::getName1() const {
    return name;
}

void armour::setName1(const std::string &name) {
    armour::name = name;
}

const std::string &armour::getArmourCategory() const {
    return armourCategory;
}

void armour::setArmourCategory(const std::string &armourCategory) {
    armour::armourCategory = armourCategory;
}

const std::string &armour::getArmourGroup() const {
    return armourGroup;
}

void armour::setArmourGroup(const std::string &armourGroup) {
    armour::armourGroup = armourGroup;
}

int armour::getArmourClassBonus() const {
    return armourClassBonus;
}

void armour::setArmourClassBonus(int armourClassBonus) {
    armour::armourClassBonus = armourClassBonus;
}

int armour::getDexterityCap() const {
    return dexterityCap;
}

void armour::setDexterityCap(int dexterityCap) {
    armour::dexterityCap = dexterityCap;
}

int armour::getStrengthRequirement() const {
    return strengthRequirement;
}

void armour::setStrengthRequirement(int strengthRequirement) {
    armour::strengthRequirement = strengthRequirement;
}

int armour::getArmourCheckPenalty() const {
    return armourCheckPenalty;
}

void armour::setArmourCheckPenalty(int armourCheckPenalty) {
    armour::armourCheckPenalty = armourCheckPenalty;
}

int armour::getSpeedPenalty() const {
    return speedPenalty;
}

void armour::setSpeedPenalty(int speedPenalty) {
    armour::speedPenalty = speedPenalty;
}

int armour::getBulk() const {
    return bulk;
}

void armour::setBulk(int bulk) {
    armour::bulk = bulk;
}
