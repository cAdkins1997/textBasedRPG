//
// Created by ulver on 12/14/2022.
//

#include "weapon.h"

weapon::weapon(const std::string &name, const std::string &rarity, float weight, float cost) : item(name, rarity,
                                                                                                    weight, cost) {}

const std::string &weapon::getName1() const {
    return name;
}

void weapon::setName1(const std::string &name) {
    weapon::name = name;
}

int weapon::getDamageFlat() const {
    return damageFlat;
}

void weapon::setDamageFlat(int damageFlat) {
    weapon::damageFlat = damageFlat;
}

int weapon::getDamageDie() const {
    return damageDie;
}

void weapon::setDamageDie(int damageDie) {
    weapon::damageDie = damageDie;
}

const std::string &weapon::getSize() const {
    return size;
}

void weapon::setSize(const std::string &size) {
    weapon::size = size;
}

int weapon::getHands() const {
    return hands;
}

void weapon::setHands(int hands) {
    weapon::hands = hands;
}

int weapon::getRangeIncrement() const {
    return rangeIncrement;
}

void weapon::setRangeIncrement(int rangeIncrement) {
    weapon::rangeIncrement = rangeIncrement;
}

const std::string &weapon::getName2() const {
    return name;
}

void weapon::setName2(const std::string &name) {
    weapon::name = name;
}

int weapon::getAttackModifer() const {
    return attackModifer;
}

void weapon::setAttackModifer(int attackModifer) {
    weapon::attackModifer = attackModifer;
}
