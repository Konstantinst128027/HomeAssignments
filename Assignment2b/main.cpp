#include <iostream>
#include <string>
#include <sstream>
#include "numerical_operation.h"
int main()
    {
        double * stack = new double[100];
        std::string opz;
        std::getline(std::cin,opz);
        std::istringstream all_elements(opz);
        std::string element;
        int top = -1;
        double *vverx_steka = &stack[0];
        while (all_elements>>element)
            {
                if (isdigit(element[0]))
                    {
                        stack[top+1] = std::stod(element);
                        vverx_steka = &stack[top+1];
                        top = top+1;
                    }
                else 
                    {
                        double a = stack[top-1];
                        double b = stack[top];
                        double result = numerical_operations(a,b,element[0]);
                        stack[top+1] = result;
                        vverx_steka = &stack[top+1];
                        top = top+1;
                    }
            }
        std::cout<<*vverx_steka<<std::endl;
        delete [] stack;
        return 0;
    }
