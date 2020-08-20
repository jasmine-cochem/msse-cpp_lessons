#include <iostream>
#include <stdexcept>

#include "functions.hpp"

int main(void)
{

    try {
        std::cout << convert_F_to_C(-60.0) << std::endl;
    }
    catch(std::exception & ex) 
    {
        std::cout << "Program encountered an error!" << std::endl;
        std::cout << ex.what() << std::endl;        
        return 1;
    }

    return 0;
}