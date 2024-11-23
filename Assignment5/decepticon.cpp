/* Berezkin Konstantin Evgenievich
./assignment5 st128027@student.spbu.ru*/
#include "decepticon.h"
Decepticon::Decepticon() : Transformer(), _color_eyes("red"), _wing_length(120) {}
Decepticon::Decepticon(std::string name) : Transformer(name), _color_eyes("red"), _wing_length(120) {}
Decepticon::Decepticon(std::string name,uint age) : Transformer(name, age), _color_eyes("red"), _wing_length(120) {}
Decepticon::~Decepticon() {}
std::string Decepticon::get_color_eyes()
{
    return _color_eyes;
}

uint Decepticon::get_wing_length()
{
    return _wing_length;
}

void Decepticon::set_wing_length(uint wing_length)
{
    _wing_length = wing_length;
}

void Decepticon::set_color_eyes(std::string color_eyes)
{
    _color_eyes = color_eyes;
}

bool Decepticon::Flight()
{
    return true;
}
std::ostream& operator<<(std::ostream& os,Decepticon& decepticon)
{
    os << decepticon.get_name() << " " << decepticon.get_age();
    return os;
}
bool operator<(Decepticon& decepticon,Decepticon& other_decepticon)
{
    return decepticon.get_age() < other_decepticon.get_age();
}
bool operator>(Decepticon& decepticon, Decepticon& other_decepticon)
{
    return decepticon.get_age() > other_decepticon.get_age();
}
void Decepticon::transform()
{
    std::cout << "Method transform called from Decepticon." << std::endl;
}
void Decepticon::openFire()
{
    std::cout << "Method openFire called from Decepticon." << std::endl;
}
void Decepticon::ulta()
{
    std::cout << "Method ulta called from Decepticon." << std::endl;
}
