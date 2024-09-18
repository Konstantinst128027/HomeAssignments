#include <iostream>
#include <string>
#include "hello_world.h"
using namespace std;
int main(){
      string a;
      hello_world("world");
      while(true)   {
           cin>>a;
           if(a != "0"){
                hello_world(a);
                }
                else break;
          }
return 0;
}
