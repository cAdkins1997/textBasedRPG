//
// Created by ulver on 12/14/2022.
//

#include "item.h"

#include <utility>

item::item(std::string name, std::string rarity, float weight, float cost) :
name(std::move(name)), rarity(std::move(rarity)), weight(weight), cost(cost) {}

const std::string &item::getName() const {
    return name;
}

void item::setName(const std::string &name) {
    item::name = name;
}

const std::string &item::getRarity() const {
    return rarity;
}

void item::setRarity(const std::string &rarity) {
    item::rarity = rarity;
}

float item::getWeight() const {
    return weight;
}

void item::setWeight(float weight) {
    item::weight = weight;
}

float item::getCost() const {
    return cost;
}

void item::setCost(float cost) {
    item::cost = cost;
}