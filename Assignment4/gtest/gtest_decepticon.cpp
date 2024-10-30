/* Berezkin Konstantin Evgenievich
./assignment4 st128027@student.spbu.ru*/
#include "gtest/gtest.h"
#include "decepticon.h"

TEST(Decepticon, get_color_eyes) 
{
    Decepticon decepticon("Megatron",100);
    EXPECT_EQ(decepticon.get_color_eyes(),"red");
}
TEST(Decepticon, get_wing_length) 
{
    Decepticon decepticon("Megatron",100);
    EXPECT_EQ(decepticon.get_wing_length(),120);
}
TEST(Decepticon, set_wing_length) 
{
    Decepticon decepticon("Megatron",100);
    EXPECT_EQ(decepticon.get_wing_length(),120);
    decepticon.set_wing_length(25);
    EXPECT_EQ(decepticon.get_wing_length(),25);
}
TEST(Decepticon, set_color_eyes) 
{
    Decepticon decepticon("Megatron",100);
    EXPECT_EQ(decepticon.get_color_eyes(),"red");
    decepticon.set_color_eyes("blue");
    EXPECT_EQ(decepticon.get_color_eyes(),"blue");
}
TEST(Decepticon, Flight) 
{
    Decepticon decepticon("Megatron",100);
    EXPECT_EQ(decepticon.Flight(), true);
}
TEST(Decepticon, Outputformat) 
{
    Decepticon decepticon("Megatron", 100);
    std::ostringstream osser;
    osser<<decepticon;
    EXPECT_EQ(osser.str(),"Megatron 100");
}
TEST(Decepticon, AgeComparison)
{
    Decepticon decipticon("Megatron", 100);
    Decepticon other_decipticon("Starscrim",80);
    EXPECT_TRUE(decipticon > other_decipticon);
    EXPECT_TRUE(other_decipticon < decipticon);
}
