//
// Created by ulver on 12/14/2022.
//

#ifndef TEXTBASEDRPG_ITEM_H
#define TEXTBASEDRPG_ITEM_H


#include <string>

class item {
private:
    std::string name;
    std::string rarity;
    float weight;
    float cost;
public:
    item(std::string name, std::string rarity, float weight, float cost);

    const std::string &getName() const;

    void setName(const std::string &name);

    const std::string &getRarity() const;

    void setRarity(const std::string &rarity);

    float getWeight() const;

    void setWeight(float weight);

    float getCost() const;

    void setCost(float cost);
};


#endif //TEXTBASEDRPG_ITEM_H
