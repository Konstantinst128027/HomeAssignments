/* Berezkin Konstantin Evgenievich
./assignment4 st128027@student.spbu.ru*/
#include "gtest/gtest.h"
#include "transformer.h"
TEST(Transformer, Transformer1)
{
    Transformer transformer;
    EXPECT_EQ(transformer.get_name(),"Unknown");
    EXPECT_EQ(transformer.get_age(), 0);
}
TEST(Transformer, Transformer2)
{
    Transformer transformer("Bamblbi");
    EXPECT_EQ(transformer.get_name(),"Bamblbi");
    EXPECT_EQ(transformer.get_age(), 0);
}
TEST(Transformer, get_name)
{
    Transformer transformer("Bamblbi",15);
    EXPECT_EQ(transformer.get_name(),"Bamblbi");
}
TEST(Transformer, get_age)
{
    Transformer transformer("Bamblbi",15);
    EXPECT_EQ(transformer.get_age(),15);
}
TEST(Transformer, get_health)
{
    Transformer transformer("Bamblbi",15);
    EXPECT_EQ(transformer.get_health(),100);
}
TEST(Transformer, get_is_transformation)
{
    Transformer transformer("Bamblbi",15);
    EXPECT_EQ(transformer.get_is_transformation(),false);
}
TEST(Transformer, get_ARMOR_NAME)
{
    Transformer transformer("Bamblbi",15);
    EXPECT_EQ(transformer.get_ARMOR_NAME(),"default armour");
}
TEST(Transformer, get_STRENGHT)
{
    Transformer transformer("Bamblbi",15);
    EXPECT_EQ(transformer.get_STRENGHT(),100);
}
TEST(Transformer, get_WEAPON_NAME)
{
    Transformer transformer("Bamblbi",15);
    EXPECT_EQ(transformer.get_WEAPON_NAME(),"Default weapon");
}
TEST(Transformer, get_WEAPON_NUMBER_PATRONS)
{
    Transformer transformer("Bamblbi",15);
    EXPECT_EQ(transformer.get_WEAPON_NUMBER_PATRONS(),25);
}

TEST(Transformer, set_name)
{
    Transformer transformer("Bamblbi",15);
    EXPECT_EQ(transformer.get_name(),"Bamblbi");
    transformer.set_name("Walli");
    EXPECT_EQ(transformer.get_name(),"Walli");
}
TEST(Transformer, set_age)
{
    Transformer transformer("Bamblbi",15);
    EXPECT_EQ(transformer.get_age(),15);
    transformer.set_age(3);
    EXPECT_EQ(transformer.get_age(),3);
}
TEST(Transformer, set_health)
{
    Transformer transformer("Bamblbi",15);
    EXPECT_EQ(transformer.get_health(),100);
    transformer.set_health(50);
    EXPECT_EQ(transformer.get_health(),50);
}
TEST(Transformer, set_is_transformation)
{
    Transformer transformer("Bamblbi",15);
    EXPECT_EQ(transformer.get_is_transformation(),false);
    transformer.set_is_transformation(true);
    EXPECT_EQ(transformer.get_is_transformation(),true);
}
TEST(Transformer, set_armour_name_and_strenght)
{
    Transformer transformer("Bamblbi",15);
    EXPECT_EQ(transformer.get_ARMOR_NAME(),"default armour");
    EXPECT_EQ(transformer.get_STRENGHT(),100);
    transformer.set_armour_name_and_strenght("Vanguard",350);
    EXPECT_EQ(transformer.get_ARMOR_NAME(),"Vanguard");
    EXPECT_EQ(transformer.get_STRENGHT(),350);
}
TEST(Transformer, set_weapon_name_and__number_patrons)
{
    Transformer transformer("Bamblbi",15);
    EXPECT_EQ(transformer.get_WEAPON_NAME(),"Default weapon");
    EXPECT_EQ(transformer.get_WEAPON_NUMBER_PATRONS(),25);
    transformer.set_weapon_name_and__number_patrons("Luk",1);
    EXPECT_EQ(transformer.get_WEAPON_NAME(),"Luk");
    EXPECT_EQ(transformer.get_WEAPON_NUMBER_PATRONS(),1);
}
TEST(Transformer,_IS_TRANFORMATION)
{
    Transformer transformer("Bamblbi",15);
    EXPECT_EQ(transformer._IS_TRANFORMATION(),true);
}
TEST(Transformer,Defende)
{
    Transformer transformer("Bamblbi",15);
    EXPECT_EQ(transformer.Defende(),true);
}
