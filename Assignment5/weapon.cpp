/* Berezkin Konstantin Evgenievich
./assignment5 st128027@student.spbu.ru*/
#include "weapon.h"
Weapon::Weapon(std::string name) : _weapon_name(name), _weapon_number_patrons(25) {}

uint Weapon::get_weapon_number_patrons()
{
    return _weapon_number_patrons;
}
std::string Weapon::get_weapon_name()
{
    return _weapon_name;
}
void Weapon::set_weapon_name(std::string name)
{
    _weapon_name = name;
}
void Weapon::set_weapon_number_patrons(uint number_patrons)
{
    _weapon_number_patrons = number_patrons;
}

