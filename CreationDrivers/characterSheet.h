//
// Created by ulver on 12/14/2022.
//

#ifndef TEXTBASEDRPG_CHARACTERSHEET_H
#define TEXTBASEDRPG_CHARACTERSHEET_H

#include<string>
#include <vector>
#include "../Items/item.h"
#include "../Items/weapon.h"
#include "../Items/armour.h"

class characterSheet {
private:
    std::string name;

    int hitPoints{};
    int actionPoints{};
    int armourClass{};
    int speed{};
    int location[1]{};

    int Strength{};
    int Dexterity{};
    int Constitution{};
    int Intelligence{};
    int Wisdom{};
    int Charisma{};

    int strengthMod{};
    int dexterityMod{};
    int constitutionMod{};
    int intelligenceMod{};
    int wisdomMod{};
    int charismaMod{};

    float goldPieces{};

    struct inventory {
        inventory(armour equippedArmour, weapon equippedWeapon);

        std::vector<item> items{};
        float weight{};
        weapon equippedWeapon;
        armour equippedArmour;
    };

    int attackMod = strengthMod + inventory(
            armour(__cxx11::basic_string(), __cxx11::basic_string(), 0, 0, __cxx11::basic_string(),
                   __cxx11::basic_string(), __cxx11::basic_string(), 0, 0, 0, 0, 0, 0),
            weapon(__cxx11::basic_string(), __cxx11::basic_string(), 0, 0)).equippedWeapon.getAttackModifer();

public:

    characterSheet();

    static float calculateInventoryWeight(const std::vector<item>& items);

    float getGoldPieces() const;

    void setGoldPieces(float goldPieces);

    const std::string &getName() const;

    void setName(const std::string &name);

    int getHitPoints() const;

    void setHitPoints(int hitPoints);

    int getActionPoints() const;

    void setActionPoints(int actionPoints);

    int getArmourClass() const;

    void setArmourClass(int armourClass);

    int getSpeed() const;

    void setSpeed(int speed);

    const int *getLocation() const;

    int getStrength() const;

    void setStrength(int strength);

    int getDexterity() const;

    void setDexterity(int dexterity);

    int getConstitution() const;

    void setConstitution(int constitution);

    int getIntelligence() const;

    void setIntelligence(int intelligence);

    int getWisdom() const;

    void setWisdom(int wisdom);

    int getCharisma() const;

    void setCharisma(int charisma);

    int getStrengthMod() const;

    void setStrengthMod(int strengthMod);

    int getDexterityMod() const;

    void setDexterityMod(int dexterityMod);

    int getConstitutionMod() const;

    void setConstitutionMod(int constitutionMod);

    int getIntelligenceMod() const;

    void setIntelligenceMod(int intelligenceMod);

    int getWisdomMod() const;

    void setWisdomMod(int wisdomMod);

    int getCharismaMod() const;

    void setCharismaMod(int charismaMod);

    int calculateAbilityMod(int abilityScore);

    void calculateAbilityModsEntire(characterSheet sheet);
};


#endif //TEXTBASEDRPG_CHARACTERSHEET_H