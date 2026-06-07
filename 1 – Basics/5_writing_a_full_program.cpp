/*
author: aditya.mishra10@nmims.in

Topics covered:
    - user i/o
    - var
    -opeartors

    (all that I learnt from this module)

    
*/

// Write code to Multiply user input by 2

/*
Implimentation (thinking out loud)

1. display a msg for the user to input value (cout)
2. define, and initialize a var "num" to hold the input
3. multiply by 2, disp result


*/

#include <iostream>

int main()
{
    std::cout << "Enter number to multiply by two: ";
    int x{};
    std::cin >> x;
    std::cout << "Number entered: " << x << '\n' ;

    std::cout << x << " multiplied by 2 is: " << x*2;

    return 0;
}

