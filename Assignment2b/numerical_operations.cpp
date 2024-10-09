#include <iostream>
double numerical_operations(double num_1, double num_2, char oper)
    {
        switch (oper)
            {
                case '+':
                    return (num_1 + num_2);
                case '-':
                    return (num_1 - num_2);
                case '*':
                    return (num_1 * num_2);
                case '/':
                    if (num_2 != 0)
                        {
                            return num_1/num_2;
                        }
                    else
                        std::cout<<"You can't divide by zero"<<std::endl;
                default:
                    std::cout<<"Unknown operation"<<std::endl;
                    return 0;
            }
    }
