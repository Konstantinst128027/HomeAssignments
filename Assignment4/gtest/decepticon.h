/* Berezkin Konstantin Evgenievich
./assignment4 st128027@student.spbu.ru*/
#ifndef DECEPTICON_H
#define DECEPTICON_H
#include "transformer.h"

class Decepticon: public Transformer
{
public:
    Decepticon();
    Decepticon(std::string name);
    Decepticon(std::string name,uint age);

    std::string get_color_eyes();
    void set_color_eyes(std::string color_eyes);
    uint get_wing_length();
    void set_wing_length(uint wing_length);

    bool Flight();
private:
    std::string _color_eyes;
    uint _wing_length;
};
std::ostream& operator<<(std::ostream& os,Decepticon& decipticon);
bool operator<(Decepticon& decipticon,Decepticon& other_decipticon);
bool operator>(Decepticon& decipticon, Decepticon& other_decipticon);
#endif
