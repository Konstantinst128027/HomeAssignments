/* Berezkin Konstantin Evgenievich
./assignment3 st128027@student.spbu.ru*/
#include "gtest/gtest.h"
#include "/home/konstbrat/Рабочий стол/main/Assignment3/weapon.h"

TEST(Weapon, get_weapon_name) 
{
    Weapon weapon("gun");
    EXPECT_EQ(weapon.get_weapon_name(),"gun");
}
TEST(Weapon, get_weapon_number_patrons) 
{
    Weapon weapon("gun");
    EXPECT_EQ(weapon.get_weapon_number_patrons(),25);
}
TEST(Weapon, set_weapon_name) 
{
    Weapon weapon("gun");
    EXPECT_EQ(weapon.get_weapon_name(),"gun");
    weapon.set_weapon_name("automat");
    EXPECT_EQ(weapon.get_weapon_name(),"automat");
}
TEST(Armour, set_weapon_number_patrons) 
{
    Weapon weapon("gun");
    EXPECT_EQ(weapon.get_weapon_number_patrons(),25);
    weapon.set_weapon_number_patrons(30);
    EXPECT_EQ(weapon.get_weapon_number_patrons(),30);
}
