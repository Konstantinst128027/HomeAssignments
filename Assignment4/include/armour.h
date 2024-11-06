/* Berezkin Konstantin Evgenievich
./assignment4 st128027@student.spbu.ru*/
#ifndef ARMOUR_H
#define ARMOUR_H

#include <iostream>
#include <string>

class Armour
{
public:
    Armour(std::string name);

    std::string get_armour_name();
    uint get_strenght();

    void set_armour_name(std::string name);
    void set_strenght(uint strenght);

private:
    std::string _armour_name;
    uint _strenght;
};

#endif
