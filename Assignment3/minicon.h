/* Berezkin Konstantin Evgenievich
./assignment3 st128027@student.spbu.ru*/
#ifndef DECEPTICON_H
#define DECEPTICON_H
#include "transformer.h"

class Minicon: public Transformer
    {
        public:
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

#endif
