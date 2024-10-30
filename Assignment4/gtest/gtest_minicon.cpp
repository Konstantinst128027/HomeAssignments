/* Berezkin Konstantin Evgenievich
./assignment4 st128027@student.spbu.ru*/
#include "gtest/gtest.h"
#include "minicon.h"
#include <sstream>
TEST(Minicon, get_energy)
{
    Minicon minicon("Overrun",60);
    EXPECT_EQ(minicon.get_energy(),300);
}
TEST(Minicon, get_hight)
{
    Minicon minicon("Overrun",60);
    EXPECT_EQ(minicon.get_hight(),200);
}
TEST(Minicon, set_energy)
{
    Minicon minicon("Overrun",60);
    EXPECT_EQ(minicon.get_energy(),300);
    minicon.set_energy(400);
    EXPECT_EQ(minicon.get_energy(),400);
}
TEST(Minicon, set_hight)
{
    Minicon minicon("Overrun",60);
    EXPECT_EQ(minicon.get_hight(),200);
    minicon.set_hight(180);
    EXPECT_EQ(minicon.get_hight(),180);
}
TEST(Minicon, Running)
{
    Minicon minicon("Overrun",60);
    EXPECT_EQ(minicon.Running(), true);
}
TEST(Minicon, Outputformat)
{
    Minicon minicon("Overrun", 60);
    std::ostringstream osser;
    osser<<minicon;
    EXPECT_EQ(osser.str(),"Overrun 60");
}
TEST(Minicon, AgeComparison)
{
    Minicon minicon("Overrun", 60);
    Minicon other_minicon("Oleg",75);
    EXPECT_TRUE(minicon < other_minicon);
    EXPECT_TRUE(other_minicon > minicon);
}
