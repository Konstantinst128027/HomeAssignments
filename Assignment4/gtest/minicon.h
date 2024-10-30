/* Berezkin Konstantin Evgenievich
./assignment4 st128027@student.spbu.ru*/
#ifndef DECEPTICON_H
#define DECEPTICON_H
#include "transformer.h"

class Minicon: public Transformer
{
public:
    Minicon();
    Minicon(std::string name);
    Minicon(std::string name,uint age);

    uint get_energy();
    void set_energy(uint energy);
    uint get_hight();
    void set_hight(uint hight);

    bool Running();
private:
    uint _energy;
    uint _hight;
};
std::ostream& operator<<(std::ostream& os,Minicon& minicon);
bool operator<(Minicon& minicon,Minicon& other_minicon);
bool operator>(Minicon& minicon, Minicon& other_minicon);
#endif
