/* Berezkin Konstantin Evgenievich
./assignment4 st128027@student.spbu.ru*/
#include "gtest/Autobot.h"
Autobot::Autobot() : Transformer(),_motto("Goida!"), _have_a_matrix_of_leadership(true) {}
Autobot::Autobot(std::string name) : Transformer(name),_motto("Goida!"), _have_a_matrix_of_leadership(true) {}
Autobot::Autobot(std::string name, std::string motto) : Transformer(name),_motto(motto), _have_a_matrix_of_leadership(true) {}
Autobot::Autobot(std::string name,uint age,std::string motto) : Transformer(name, age),_motto(motto), _have_a_matrix_of_leadership(true) {}

std::string Autobot::get_motto()
{
    return _motto;
}
void Autobot::set_motto(std::string motto)
{
    _motto = motto;
}
bool Autobot::get_have_a_matrix_of_leadership()
{
    return _have_a_matrix_of_leadership;
}
void Autobot::set_have_a_matrix_of_leadership(bool have_a_matrix_of_leadership)
{
    _have_a_matrix_of_leadership = have_a_matrix_of_leadership;
}
bool Autobot::Driving()
{
    return true;
}
std::ostream& operator<<(std::ostream& os,Autobot& autobot)
{
    os << autobot.get_name() << " " << autobot.get_age();
    return os;
}
bool operator<(Autobot& autobot,Autobot& other_autobot)
{
    return autobot.get_age() < other_autobot.get_age();
}
bool operator>(Autobot& autobot, Autobot& other_autobot)
{
    return autobot.get_age() > other_autobot.get_age();
}
