/* Berezkin Konstantin Evgenievich
./assignment3 st128027@student.spbu.ru*/
#include "gtest/armour.h"

Armour::Armour(std::string name) : _armour_name(name), _strenght(100) {}
std::string Armour::get_armour_name() 
    {
        return _armour_name;
    }
uint Armour::get_strenght() 
    {
        return _strenght;
    }
void Armour::set_armour_name(std::string name) 
    {
        _armour_name = name;
    }
void Armour::set_strenght(uint strenght) 
    {
        _strenght = strenght;
    }

