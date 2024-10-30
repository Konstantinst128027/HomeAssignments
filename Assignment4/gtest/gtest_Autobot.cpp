/* Berezkin Konstantin Evgenievich
./assignment4 st128027@student.spbu.ru*/
#include "gtest/gtest.h"
#include "Autobot.h"
TEST(Autobot, Transformer3)
{
    Autobot autobot("Optimus prime","Goida");
    EXPECT_EQ(autobot.get_name(),"Optimus prime");
    EXPECT_EQ(autobot.get_motto(),"Goida");
}
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
TEST(Autobot, Outputformat)
{
    Autobot autobot("Optimus prime", 100,"Goida");
    std::ostringstream osser;
    osser<<autobot;
    EXPECT_EQ(osser.str(),"Optimus prime 100");
}
TEST(Autobot, AgeComparison)
{
    Autobot autobot("Optimus prime", 100,"Goida");
    Autobot other_autobot("Bamblbi",20,"We are autobots!");
    EXPECT_TRUE(autobot > other_autobot);
    EXPECT_TRUE(other_autobot < autobot);
}
