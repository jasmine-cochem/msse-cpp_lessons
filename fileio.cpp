/* #include <iostream>  //file input/output streams (fstreams)  //Case A: output file
#include <fstream>


int main(void)
{
    std::ofstream outfile("new_file.txt", std::fstream::app);  //specify the file we want to write to, rel to our directory  //app means append, if keep running keep appending output to file instead of creating new one each time
    outfile << "Hello, File!" << std::endl;

    outfile.precision(15);
    double pi = 3.1415;  // Now print pi value and "Hello, file!" to txt file each execution
    outfile << pi << std::endl;

    return 0;
}  */





#include <iostream>  //file input/output streams (fstreams)  //Case B: inputting files
#include <fstream>


int main(void)
{



    std::fstream infile("input.txt"); //input filestream with path
    if(!infile.is_open())
    {
        std::cout << "Input file does not exist!" << std::endl;
        return 1;
    }
    int n = 0;
    std::string name;
    double x, y, z;

    infile >> n >> name >> x >> y >> z; //Define data type and variable to print out, arrows indicate data flow direction
    std::cout << "n = " << n << std::endl;
    std::cout << "name = " << name << std::endl;
    std::cout << "x, y, z = " << x << " " << y << " " << z << " " << std::endl;


    return 0;
}