/* Berezkin Konstantin Evgenievich
./assignment3 st128027@student.spbu.ru*/
#include "gtest/gtest.h"
#include "/home/konstbrat/Рабочий стол/main/Assignment3/decepticon.h"

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
