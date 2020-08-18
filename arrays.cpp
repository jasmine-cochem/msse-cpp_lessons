/*#include <iostream>

 int main(void)
{
    // Create an array of 10 doubles
    double arr[10] = { 0.0, 2.0, 4.0, 6.0, 8.0, 10.0, 12.0, 14.0, 16.0, 18.0 };
    
    for(int idx = 0; idx < 10; idx++)
    {
        std::cout << idx << " : " << arr[idx] << std::endl;
    }

    arr[10] = 20.0;

    return 0;
} */




/*#include <iostream>

int main (void)
{
    int i = 1234;
    std::cout << "Value of i " << i << std::endl;
    std::cout << "Address of i " << &i << std::endl;

    int * pi = &i;
    std::cout << "Value of pi " << pi << std::endl;
    std::cout << "Value of *pi " << *pi << std::endl;


    *pi = 5678;
    std::cout << "Value of i " << i << std::endl;
    
    i = 91011;
    std::cout << "Value of *pi " << *pi << std::endl;

    int * point = nullptr; //Null pointer
    std::cout << *point << std::endl;
    
    return 0;

} */





/*#include <iostream>


int main(void) 
{
    int ndoubles = 100;

    double * pd = new double[ndoubles];

    pd[0] = 3.1415;
    pd[1] = 2*pd[0];

    std::cout << pd[0] << " " <<pd[1] << std::endl;
    
    delete [] pd;
    return 0;
}*/



/* #include <iostream> // a better way - std::vector
#include <vector>

int main(void)
{
    int ndoubles = 100;

    std::vector<double> dvec;\
    dvec.resize(ndoubles);

    for(size_t i = 0; i < dvec.size(); i++)
    {
        dvec.at(i) = 0.0;
    }

    std::cout << "Size: " <<dvec.size() << std::endl;
    dvec.push_back(3.1415);
    std::cout << "Size: " <<dvec.size() << std::endl;

    dvec.pop_back();
    std::cout << "Size " << dvec.size() << std::endl;
   
    
    dvec.at(50) = 66.789; //51st element
    std::cout << "Size: " << dvec.size() << std::endl;

    //dvec.clear();
    //std::cout << "Size: " << dvec.size() << std::endl;

    return 0; 
} */









/* #include <iostream> //Typedefs
#include <vector>
#include <array>

typedef std::array<double, 3> AtomCoord; //Holds atomic coord
typedef std::vector<AtomCoord> Coordinates;


int main(void)
{
    AtomCoord coord = {1.0, 2.0, 3.0};
    Coordinates = atomic_coordinates;


    coordinates.push_back(coord);
    std::cout << "Coordinate: " << coordinates.at(0).at(0) << std::endl;

    //std::cout << "Size: " << coord.size() << std::endl;
    //coord.at(3) = 1.0;

    //std::array<double, 3> coord2 = coord;
    //std::cout << coord2[0] << std::endl;
    
    return 0;
}
*/




#include <iostream> //References
#include <vector>
#include <array>
#include <string>

int main(void)
{
    std::string my_string = "Hello, World!";
    std::string & ref_string = my_string;
    std::cout << "String: " << my_string << std::endl;
    std::cout << "String: " << ref_string << std::endl;

    std::cout << "Address: " << &my_string << std::endl;
    std::cout << "Address: " << &ref_string << std::endl;

    std::string my_string2 = "Bye, World!";
    ref_string = my_string2;
    std::cout << "Ref string: " << ref_string << std::endl;
    std::cout << "My string: " << my_string << std::endl;

    return 0;
}