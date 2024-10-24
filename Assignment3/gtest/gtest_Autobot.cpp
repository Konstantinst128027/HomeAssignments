/* Berezkin Konstantin Evgenievich
./assignment3 st128027@student.spbu.ru*/
#include "gtest/gtest.h"
#include "Autobot.h"

TEST(Autobot, get_motto) 
{
    Autobot autobot("Optimus prime",100,"Goida");
    EXPECT_EQ(autobot.get_motto(),"Goida");
}
TEST(Autobot, get_have_a_matrix_of_leadership) 
{
    Autobot autobot("Optimus prime",100,"Goida");
    EXPECT_EQ(autobot.get_have_a_matrix_of_leadership(),true);
}
TEST(Autobot, set_motto) 
{
    Autobot autobot("Optimus prime",100,"Goida");
    EXPECT_EQ(autobot.get_motto(),"Goida");
    autobot.set_motto("We are autobots!");
    EXPECT_EQ(autobot.get_motto(),"We are autobots!");
}
TEST(Autobot, set_have_a_matrix_of_leadership) 
{
    Autobot autobot("Optimus prime",100,"Goida");
    EXPECT_EQ(autobot.get_have_a_matrix_of_leadership(),true);
    autobot.set_have_a_matrix_of_leadership(false);
    EXPECT_EQ(autobot.get_have_a_matrix_of_leadership(),false);
}
TEST(Autobot, Driving) 
{
    Autobot autobot("Optimus prime",100,"Goida");
    EXPECT_EQ(autobot.Driving(), true);
}
