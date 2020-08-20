/* #include <iostream> // for cout


void say_something(void)
{
    std::cout << "Something!" << std::endl;
    return;
}

int main(void)
{
    say_something();
    return 0;
} */





//LEsson: const keyword
/* #include <iostream> //for cout

int main(void) 
{
    double pi = 3.1415;
    const double & rpi = pi;

    std::cout << pi << std::endl << rpi << std::endl;

    rpi = 2.0*pi;
    std::cout << pi << std::endl << rpi << std::endl;
    return 0;
} */






//Argument passing by reference
/* #include <iostream>

void convert_F_to_C(double temperature)
{
    temperature = (temperature - 32.0)*(5.0/9.0);
    std::cout << "Temperature in funtion: " << &temperature << std::endl; // print the address of the temperature
}

int main(void)
{
    double temperature = 68.1;
    convert_F_to_C(temperature);
    std::cout << "Temperature is " << &temperature << std::endl;

    return 0;
} */



//Argument passing by reference
/* #include <iostream>

void convert_F_to_C(double & temperature) //Ampersand is the diff from last example
{
    temperature = (temperature - 32.0)*(5.0/9.0);
    std::cout << "Temperature in funtion: " << &temperature << std::endl; // print the address of the temperature
}

int main(void)
{
    double temperature = 68.1;
    convert_F_to_C(temperature);
    std::cout << "Temperature is " << &temperature << std::endl; //print address
    std::cout << "Temperature: " << temperature << std::endl;  //print converted temp

    return 0;
} */


//Argument passing by pointer
/* #include <iostream>

void convert_F_to_C(double * temperature) //Asterisk is the diff from last example -> pointer
{
    * temperature = (temperature - 32.0)*(5.0/9.0);  //Deference pointer with star every time we use it
    std::cout << "Temperature in funtion: " << &temperature << std::endl; 
}

int main(void)
{
    double temperature = 68.1;
    convert_F_to_C(&temperature);  //Another diff: need to send in address of temp instead of temp itself
    std::cout << "Temperature is " << &temperature << std::endl; 
    std::cout << "Temperature: " << temperature << std::endl;  
    return 0;
} */



//Rewrite conversion function  //Const correctness: 
 /* #include <iostream>

double convert_F_to_C(const double & temperature) 
{
    return (temperature - 32.0) * (5.0/9.0);
}

int main(void)
{
    const double temperature = 68.1;
    double new_temperature = convert_F_to_C(temperature);  
    std::cout << "New Temperature: " << new_temperature << std::endl;  
   
    return 0;
} */




//Write another fxn that takes a std vector of temps
/* #include <iostream>
#include <vector>

std::vector<double> convert_F_to_C_vect(std::vector<double> temperatures)
{
    //Exercise fxn: loop over temperatures, convert them, store them to another vector
    std::vector<double> new_temperatures;

    for (size_t i = 0; i < temperatures.size(); i++)
    {
        double t = (temperatures[i] - 32.0) * (5.0/9.0);
        new_temperatures.push_back(t);
    }
    return new_temperatures;
}


double convert_F_to_C(double temperature = 0.0) 
{
    const double absolute_zero = -459.67; //Abs zero in F
    if(temperature < absolute_zero)
    {
        throw std::runtime_error("Given a temperature below absolute zero!"); //saying not to convert if temp is below abs zero
    }
    return (temperature - 32.0) * (5.0/9.0);
}

int main(void)
{
    
    //std::vector<double> temperatures;
    //temperatures.push_back(212.0);
    //temperatures.push_back(32.0);
    //temperatures.push_back(-40.0);
   
    //std::vector<double> new_temperatures = convert_F_to_C(temperatures);
    //std::cout << new_temperatures.at(0) << std:: endl;

    try {
        std::cout << convert_F_to_C(-600.0) << std::endl;
    }
    catch(std::exception & ex) 
    {
        std::cout << "Program encountered an error!" << std::endl;
        std::cout << ex.what() << std::endl;        
        return 1;
    }

    return 0;
} */








/*
//modify temp funct
#include <iostream>
//#include <vector> //remove inc vect b/c its included in header file
#include <stdexcept>
#include "functions.hpp" //Since incl declaration in header file, no longer need dec first line

//Forward declarations
//double convert_F_to_C(double temperature); //Forward declaration

std::vector<double> convert_F_to_C_vect(std::vector<double> temperatures)
{
    std::vector<double> new_temperatures;

    for (size_t i = 0; i < temperatures.size(); i++)
    {
        //double t = (temperatures[i] - 32.0) * (5.0/9.0);
        double t = convert_F_to_C(temperatures[i]);
        new_temperatures.push_back(t);
    }
  
    return new_temperatures;
}


double convert_F_to_C(double temperature) 
{
    const double absolute_zero = -459.67; //Abs zero in F
    if(temperature < absolute_zero)
    {
        throw std::runtime_error("Given a temperature below absolute zero!"); //saying not to convert if temp is below abs zero
    }
    return (temperature - 32.0) * (5.0/9.0);
}
int main(void)
{
    
    //std::vector<double> temperatures;
    //temperatures.push_back(212.0);
    //temperatures.push_back(32.0);
    //temperatures.push_back(-40.0);
   
    //std::vector<double> new_temperatures = convert_F_to_C(temperatures);
    //std::cout << new_temperatures.at(0) << std:: endl;

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
*/



//Now for functions_main.cpp file //Put main function in functions_main.cpp
#include <iostream>
//#include <vector> //remove inc vect b/c its included in header file
#include <stdexcept>
#include "functions.hpp" //Now only have two conversion fxns in this file

std::vector<double> convert_F_to_C_vect(std::vector<double> temperatures)
{
    std::vector<double> new_temperatures;

    for (size_t i = 0; i < temperatures.size(); i++)
    {
        //double t = (temperatures[i] - 32.0) * (5.0/9.0);
        double t = convert_F_to_C(temperatures[i]);
        new_temperatures.push_back(t);
    }
  
    return new_temperatures;
}

double convert_F_to_C(double temperature) 
{
    const double absolute_zero = -459.67; //Abs zero in F
    if(temperature < absolute_zero)
    {
        throw std::runtime_error("Given a temperature below absolute zero!"); //saying not to convert if temp is below abs zero
    }
    return (temperature - 32.0) * (5.0/9.0);
}
