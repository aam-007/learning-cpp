/*
author: aditya.mishra10@nmims.in

Topics covered:
    - l-values (left value)
    -l-value refrences 

// regular types
int        // a normal int type (not an reference)
int&       // an lvalue reference to an int object
double&    // an lvalue reference to a double object
const int& // an lvalue reference to a const int object

*/

#include <iostream>

/*

L values:

int main()
{
    int x{};
    int y{x}; // x is an lvalue expression ===> evaluates to a variable x
}

*/


// Lvalue reference variables

int main()
{
    int x{6};
    int& ref{x};

    std::cout << x << '\n';
    std :: cout << ref << '\n';
;

    // Modifying values through a non-const lvalue reference

    ref = 39;

    std::cout << x << '\n';


    return 0; 

}