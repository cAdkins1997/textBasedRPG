//
// Created by ulver on 12/14/2022.
//

#ifndef TEXTBASEDRPG_WEAPON_H
#define TEXTBASEDRPG_WEAPON_H


#include "item.h"

class weapon: private item {
private:
    std::string name;

    int damageFlat{};
    int damageDie{};
    std::string size;
    int hands{};
    int rangeIncrement{};
    int attackModifer;
public:
    weapon(const std::string &name, const std::string &rarity, float weight, float cost);

    const std::string &getName1() const;

    void setName1(const std::string &name);

    int getDamageFlat() const;

    void setDamageFlat(int damageFlat);

    int getDamageDie() const;

    void setDamageDie(int damageDie);

    const std::string &getSize() const;

    void setSize(const std::string &size);

    int getHands() const;

    void setHands(int hands);

    int getRangeIncrement() const;

    void setRangeIncrement(int rangeIncrement);

    const std::string &getName2() const;

    void setName2(const std::string &name);

    int getAttackModifer() const;

    void setAttackModifer(int attackModifer);

};

#endif //TEXTBASEDRPG_WEAPON_H
