//
// Created by ulver on 12/15/2022.
//

#ifndef TEXTBASEDRPG_ARMOUR_H
#define TEXTBASEDRPG_ARMOUR_H


#include "item.h"

class armour: private item {
private:
    std::string name;
    std::string armourCategory;
    std::string armourGroup;
    int armourClassBonus;
    int dexterityCap;
    int strengthRequirement;
    int armourCheckPenalty;
    int speedPenalty;
    int bulk;
public:
    armour(const std::string &name, const std::string &rarity, float weight, float cost, const std::string &name1,
           const std::string &armourCategory, const std::string &armourGroup, int armourClassBonus, int dexterityCap,
           int strengthRequirement, int armourCheckPenalty, int speedPenalty, int bulk);

    const std::string &getName1() const;

    void setName1(const std::string &name);

    const std::string &getArmourCategory() const;

    void setArmourCategory(const std::string &armourCategory);

    const std::string &getArmourGroup() const;

    void setArmourGroup(const std::string &armourGroup);

    int getArmourClassBonus() const;

    void setArmourClassBonus(int armourClassBonus);

    int getDexterityCap() const;

    void setDexterityCap(int dexterityCap);

    int getStrengthRequirement() const;

    void setStrengthRequirement(int strengthRequirement);

    int getArmourCheckPenalty() const;

    void setArmourCheckPenalty(int armourCheckPenalty);

    int getSpeedPenalty() const;

    void setSpeedPenalty(int speedPenalty);

    int getBulk() const;

    void setBulk(int bulk);
};


#endif //TEXTBASEDRPG_ARMOUR_H
