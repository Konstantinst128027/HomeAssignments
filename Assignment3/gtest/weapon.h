/* Berezkin Konstantin Evgenievich
./assignment3 st128027@student.spbu.ru*/
#ifndef WEAPON_H
#define WEAPON_H
#include <iostream>
#include <string>

class Weapon
    {
        public:
            Weapon(std::string name);
            uint get_weapon_number_patrons();
            std::string get_weapon_name();
            void set_weapon_name(std::string name);
            void set_weapon_number_patrons(uint number_patrons);
        private:
            std::string _weapon_name;
            uint _weapon_number_patrons;
    };
#endif
