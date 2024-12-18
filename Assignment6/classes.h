/* Berezkin Konstantin Evgenievich
./assignment4 st128027@student.spbu.ru*/
#ifndef CLASSES_H
#define CLASSES_H

#include <vector>

class Class1 {
public:
    bool bar(int num, std::vector<float>&) {
        return num > 0;
    }

    int c_i_1() { return 1; }
    float c_i_2() { return 1.0f; }
    void c_i_3() {}
};

class Class2 {
public:
    bool bar(int, std::vector<float>& vec) {
        return !vec.empty();
    }

    int c_i_1() { return 2; }
    float c_i_2() { return 2.0f; }
    void c_i_3() {}
};

class Class3 {
public:
    bool bar(int num, std::vector<float>& vec) {
        return num == static_cast<int>(vec.size()) * -1;
    }

    int c_i_1() { return 3; }
    float c_i_2() { return 3.0f; }
    void c_i_3() {}
};
#endif
