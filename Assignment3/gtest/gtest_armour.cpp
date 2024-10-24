/* Berezkin Konstantin Evgenievich
./assignment3 st128027@student.spbu.ru*/
#include "gtest/gtest.h"
#include "armour.h"

TEST(Armour, get_armour_name) 
{
    Armour armour("Shield");
    EXPECT_EQ(armour.get_armour_name(),"Shield");
}
TEST(Armour, get_strenght) 
{
    Armour armour("Shield");
    EXPECT_EQ(armour.get_strenght(),100);
}
TEST(Armour, set_armour_name) 
{
    Armour armour("Shield");
    EXPECT_EQ(armour.get_armour_name(),"Shield");
    armour.set_armour_name("blademail");
    EXPECT_EQ(armour.get_armour_name(),"blademail");
}
TEST(Armour, set_strenght) 
{
    Armour armour("Shield");
    EXPECT_EQ(armour.get_strenght(),100);
    armour.set_strenght(30);
    EXPECT_EQ(armour.get_strenght(),30);
}
