/* Berezkin Konstantin Evgenievich
./assignment4 st128027@student.spbu.ru*/
#include "Mytemplclass.h"
#include "classes.h"
#include <gtest/gtest.h>

TEST(MyTemplateClassTest, Class1True) {
    Class1 obj;
    MyTemplateClass<Class1> myObj(obj, 5, {});
    EXPECT_EQ(myObj.foo(),true);
}

TEST(MyTemplateClassTest, Class1False) {
    Class1 obj;
    MyTemplateClass<Class1> myObj(obj, -5, {});
    EXPECT_EQ(myObj.foo(),false);
}

TEST(MyTemplateClassTest, Class2True) {
    Class2 obj;
    std::vector<float> vec = {1.0f};
    MyTemplateClass<Class2> myObj(obj, 0, vec);
    EXPECT_EQ(myObj.foo(),true);
}

TEST(MyTemplateClassTest, Class2False) {
    Class2 obj;
    std::vector<float> emptyVec;
    MyTemplateClass<Class2> myObj(obj, 0, emptyVec);
    EXPECT_EQ(myObj.foo(),false);
}

TEST(MyTemplateClassTest, Class3True) {
    Class3 obj;
    std::vector<float> vec(3);
    MyTemplateClass<Class3> myObj(obj, -3, vec);
    EXPECT_EQ(myObj.foo(),true);
}

TEST(MyTemplateClassTest, Class3False) {
    Class3 obj;
    std::vector<float> vec(2);
    MyTemplateClass<Class3> myObj(obj, -3, vec);
    EXPECT_EQ(myObj.foo(),false);
}

TEST(MyTemplateClassSpecializationTestInt, IntSpecializationAlwaysTrue) {
    MyTemplateClass<int> myIntObj(0, 0, {});
    EXPECT_EQ(myIntObj.foo(),true);
}

TEST(MyTemplateClassSpecializationTestDouble, DoubleSpecializationAlwaysFalse) {
    MyTemplateClass<double> myDoubleObj(0.0, 0, {});
    EXPECT_EQ(myDoubleObj.foo(),false);
}
