/* Berezkin Konstantin Evgenievich
./assignment4 st128027@student.spbu.ru*/
#ifndef TRANSFORMER_H
#define TRANSFORMER_H


#include <iostream>
#include <string>
#include "armour.h"
#include "weapon.h"

class Transformer
{
private:
    std::string _name;
    uint _age;
    bool _is_transformation;
    uint _health;
    Armour* _armour;
    Weapon* _weapon;
public:
    Transformer();
    Transformer(std::string name);
    Transformer(std::string name, uint age);
    ~Transformer();

    std::string get_name();
    void set_name(std::string name);
    uint get_age();
    void set_age(uint age);
    uint get_health();
    void set_health(uint health);
    bool get_is_transformation();
    void set_is_transformation(bool is_transformation);

    std::string get_ARMOR_NAME();
    uint get_STRENGHT();
    void set_armour_name_and_strenght(std::string name, uint strenght);
    std::string get_WEAPON_NAME();
    uint get_WEAPON_NUMBER_PATRONS();
    void set_weapon_name_and__number_patrons(std::string name,uint number_patrons);

    bool _IS_TRANFORMATION();
    bool Defende();


};
#endif

