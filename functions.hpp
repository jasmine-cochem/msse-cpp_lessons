
#pragma once //tells compiler to include header file only once

#include <vector> //dont incl iostreasm or stdexcept b/c its in def of fxns in .cpp

/*! \brief Converts a temperature in farenheit to celsius 
*
*Converts a temperature in degrees Farenheight to degrees Celcius
*
* \throw std::runtime_error when temperature is below absolute zero (in farenheit).
*
* \param [in] temperature A temperature in farenheit to convert
* \return The temperature \p temperature in Celcius
*/

double convert_F_to_C(double temperature);

std::vector<double> convert_F_to_C_vect(std::vector<double> temperatures); //dec second .cpp