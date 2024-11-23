/* Berezkin Konstantin Evgenievich
./assignment5 st128027@student.spbu.ru*/
#ifndef AUTOBOT_H
#define AUTOBOT_H
#include "transformer.h"

class Autobot: public Transformer
{
public:
    Autobot();
    Autobot(std::string name);
    Autobot(std::string name,std::string motto);
    Autobot(std::string name,uint age, std::string motto);
    ~Autobot();
    std::string get_motto();
    void set_motto(std::string motto);
    bool get_have_a_matrix_of_leadership();
    void set_have_a_matrix_of_leadership(bool have_a_matrix_of_leadership);

    bool Driving();
    
    void transform() override;
    void openFire() override;
    void ulta() override;
private:
    std::string _motto;
    bool _have_a_matrix_of_leadership;
};
std::ostream& operator<<(std::ostream& os,Autobot& autobot);
bool operator<(Autobot& autobot,Autobot& other_autobot);
bool operator>(Autobot& autobot, Autobot& other_autobot);

#endif
