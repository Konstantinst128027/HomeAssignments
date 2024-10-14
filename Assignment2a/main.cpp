/* Berezkin Konstantin Evgenievich
./DZ2A st128027@student.spbu.ru*/
#include <iostream>
#include <fstream>
#include <filesystem>
#include "reverse.h"
int main()
{   
    std::ifstream infile;
    infile.open("infile.txt",std::ios::binary|std::ios::in);
    if(!infile.is_open())
        {
            std::cout << "Error" << std::endl;
            return 1;
        }
    int amounts_char = std::filesystem::file_size("infile.txt");
    char * array = new char[amounts_char];
    infile.read(array,amounts_char);
    reverseArray(array,amounts_char);
    std::ofstream outfile;
    outfile.open("outfile.txt",std::ios::binary|std::ios::out);
    if(!outfile.is_open())
        {
            std::cout << "Error" << std::endl;
            return 1;
        }
    outfile.write(array,amounts_char);
    delete [] array;
    infile.close();
    outfile.close();
    return 0;
}
