/*
author: aditya.mishra10@nmims.in

Topics covered:
- if statements
- bool fxns

*/


#include <iostream>
/*
int main()
{
    std::cout << "Enter number: ";
    long long x{};

    std::cin >> x;

    if (x < 0)
    {
        std::cout << "Number negative \n";
    }

    else if (x == 0)
    {
        std::cout << "Number is equal to zero";

    }

    else
    {
        std::cout << "Number is positive";

    }

    return 0;
}

*/

bool isEqual(long long x, long long y)
{
    return x == y;
}

int main()
{
    std::cout << "Enter x: ";
    long long x{};
    std::cin >> x;

    
    std::cout << "Enter Y: ";
    long long y{};
    std::cin >> y;

    if (isEqual(x, y))
    {
        std::cout << "Numbers are equal";
    }

    else{
        std::cout << "not equal";
    }

    return 0;


}