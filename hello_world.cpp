#include <iostream>
#include <string>
#include <map>

void say_hello(std::string name)
{
   if(name == "Dr. Pritchard" || name == "Dr. Nash")
   {
       std::cout << "Hello, " << name << " (from MolSSI)" << std::endl;
   }
   else if(name == "Dr. Johansen")
   {
       std::cout << "Hello, " << name << " (from Berkeley)" << std::endl;
   }
   else if(name == "Jasmine")
   {
       std::cout << "Hello, " << name << " (from Berkeley)" << std::endl;
   }
   else
   {
       std::cout << "Hello, " << name << " (location)" << std::endl;
   }
}

int main(void)
{
   say_hello("Dr. Pritchard");
   say_hello("Dr. Nash");
   say_hello("Dr. Johansen");
   say_hello("Jasmine");
   return 0;
}