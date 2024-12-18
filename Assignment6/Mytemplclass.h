/* Berezkin Konstantin Evgenievich
./assignment4 st128027@student.spbu.ru*/
#ifndef MYTEMPLATECLASS_H
#define MYTEMPLATECLASS_H

#include <vector>

template <typename T>
class MyTemplateClass {
private:
    T instance;
    int number;
    std::vector<float> vec;

public:
    MyTemplateClass(T inst, int num, std::vector<float> v)
        : instance(inst), number(num), vec(v) {}

    bool foo() {
        return instance.bar(number, vec);
    }
};

template <>
class MyTemplateClass<int> {
private:
    int instance;
    int number;
    std::vector<float> vec;

public:
    MyTemplateClass(int inst, int num, std::vector<float> v)
        : instance(inst), number(num), vec(v) {}

    bool foo() {
        return true;
    }
};

template <>
class MyTemplateClass<double> {
private:
    double instance;
    int number;
    std::vector<float> vec;

public:
    MyTemplateClass(double inst, int num, std::vector<float> v)
        : instance(inst), number(num), vec(v) {}

    bool foo() {
        return false;
    }
};

#endif
