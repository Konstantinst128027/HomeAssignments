/* Berezkin Konstantin Evgenievich
./DZ2A st128027@student.spbu.ru*/
#include <iostream>
void reverseArray(char arr[], int  size) 
    {    
         char c;
         for (int i = 0; i <= ((size-2)/2); i++)
             {
                 c =  arr[i];
                 arr[i] = arr[size - 2 - i];
                 arr[size - 2 - i] = c;
             }
    }
