/*
author: aditya.mishra10@nmims.in

Topics covered:
    - std::vector (.at, sizeof, a[], .size)

*/

#include <iostream>
#include <vector> //include vector headerfile

int main()
{
    /*
    std::vector<int> empty {}; //std::vector<datatype> name{len};

    std::vector<char> name {'a', 'd', 'i'};

    std::vector<double> dec {1.2 , 2.8};

    //accessing elements

    std::cout << "element on zeroth index is: " << '\n' << name[0] << '\n' << dec[0] << '\n';

    return  0; 

    */

    std::vector<int> num(10);

    std::cout << num.size() << '\n' ;
    std::cout << num.at(3) << '\n'; //.at has runtime bounds check
    std::cout << num.at(67); // terminate called after throwing an instance of 'std::out_of_range'
    // std::cout << num[67]; //no bounds check

    return 0; 

}