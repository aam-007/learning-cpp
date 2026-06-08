/*
author: aditya.mishra10@nmims.in

Topics covered:
    - user defined data types (struct)


struct name{
    type var{};
    type var{};
}

int main()
{
 name var {val, val};
 std::cout << var.val;
}

*/

#include <iostream>

struct Fraction
{
    int a{};
    int b{};


};

int main()
{
    Fraction f{3, 5}; 

      std::cout << static_cast<double>(f.a) / f.b << '\n';

    return 0; 
}