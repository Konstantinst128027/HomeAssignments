/* Berezkin Konstantin Evgenievich
./assignment4 st128027@student.spbu.ru*/
#include "transformer.h"
Transformer::Transformer() : _name("Unknown"), _age(0), _is_transformation(false), _health(100), _armour(new Armour("default armour")), _weapon(new Weapon("Default weapon")) {}
Transformer::Transformer(std::string name) : _name(name), _age(0), _is_transformation(false), _health(100), _armour(new Armour("default armour")), _weapon(new Weapon("Default weapon")) {}
Transformer::Transformer(std::string name, uint age) : _name(name), _age(age), _is_transformation(false), _health(100), _armour(new Armour("default armour")), _weapon(new Weapon("Default weapon")) {}

Transformer::~Transformer()
{
    delete _armour;
}
std::string Transformer::get_name()
{
    return _name;
}
void Transformer::set_name(std::string name)
{
    _name = name;
}
uint Transformer::get_age()
{
    return _age;
}
void Transformer::set_age(uint age)
{
    _age = age;
}
uint Transformer::get_health()
{
    return _health;
}
void Transformer::set_health(uint health)
{
    _health = health;
}
bool Transformer::get_is_transformation()
{
    return _is_transformation;
}
void Transformer::set_is_transformation(bool is_transformation)
{
    _is_transformation = is_transformation;
}
std::string Transformer::get_ARMOR_NAME()
{
    return _armour->get_armour_name();
}
uint Transformer::get_STRENGHT()
{
    return _armour->get_strenght();
}
void Transformer::set_armour_name_and_strenght(std::string name, uint strenght)
{
    delete _armour;
    _armour = new Armour(name);
    _armour->set_strenght(strenght);
}
std::string Transformer::get_WEAPON_NAME()
{
    return _weapon->get_weapon_name();
}
uint Transformer::get_WEAPON_NUMBER_PATRONS()
{
    return _weapon->get_weapon_number_patrons();
}
void Transformer::set_weapon_name_and__number_patrons(std::string name, uint number_patrons)
{
    delete _weapon;
    _weapon = new Weapon(name);
    _weapon->set_weapon_number_patrons(number_patrons);
}
bool Transformer::_IS_TRANFORMATION()
{
    _is_transformation = !_is_transformation;
    return _is_transformation;
}
bool Transformer::Defende()
{
    _health--;
    return true;
}

