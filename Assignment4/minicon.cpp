/* Berezkin Konstantin Evgenievich
./assignment4 st128027@student.spbu.ru*/
#include "gtest/minicon.h"
Minicon::Minicon() : Transformer(),_energy(300), _hight(200) {}
Minicon::Minicon(std::string name) : Transformer(name),_energy(300), _hight(200) {}
Minicon::Minicon(std::string name,uint age) : Transformer(name, age),_energy(300), _hight(200) {}

uint Minicon::get_energy()
{
    return _energy;
}
void Minicon::set_energy(uint energy)
{
    _energy = energy;
}
uint Minicon::get_hight()
{
    return _hight;
}
void Minicon::set_hight(uint hight)
{
    _hight = hight;
}

bool Minicon::Running()
{
    return true;
}
std::ostream& operator<<(std::ostream& os,Minicon& minicon)
{
    os << minicon.get_name() << " " << minicon.get_age();
    return os;
}
bool operator<(Minicon& minicon,Minicon& other_minicon)
{
    return minicon.get_age() < other_minicon.get_age();
}
bool operator>(Minicon& minicon, Minicon& other_minicon)
{
    return minicon.get_age() > other_minicon.get_age();
}
