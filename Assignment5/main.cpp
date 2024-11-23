/* Berezkin Konstantin Evgenievich
./assignment5 st128027@student.spbu.ru*/
#include <iostream>
#include <vector>
#include "transformer.h"
#include "decepticon.h"
#include "autobot.h"

int main()
{   
    Transformer transformer1;
    transformer1.ulta();
    transformer1.transform();
    transformer1.openFire();
    
    Decepticon decepticon1;
    decepticon1.ulta();
    decepticon1.transform();
    decepticon1.openFire();
    
    Autobot autobot1; 
    autobot1.ulta();
    autobot1.transform();
    autobot1.openFire();
    
    std::cout<<"\n";
    Transformer* t1 = new Decepticon();
    t1->transform();
    t1->openFire();
    t1->ulta();
    
    std::cout<<"\n";
    Transformer* t2 = new Autobot();
    t2->transform();
    t2->openFire();
    t2->ulta();
    
    std::cout<<"\n";
    std::vector<Transformer*> transformers;
    for (int i = 0; i<3; i++)
    {
    transformers.push_back(new Autobot());
    transformers.push_back(new Decepticon());
    }
    for (Transformer* transformer : transformers) {
        transformer->transform();
        transformer->openFire();
        transformer->ulta();
        delete transformer;
    }
    return 0;
}
