/*
author: aditya.mishra10@nmims.in

The quentesential calculator app!

*/

/*
How will i impliment:
    - add(), sub(), multiply(), divide()
    -main()
*/

#include <iostream>


double add(double x, double y);
double sub(double x, double y);
double multiply(double x, double y);
double divide(double x, double y);


int main()
{
    std::cout << "Enter num 1: ";
    double x{};
    std::cin >> x;

    std::cout << "Enter num 2: ";
    double y{};
    std::cin >> y;

    std::cout << "Enter choice (+, -, *, /): ";
    char ch{};
    std::cin >> ch;

    if (ch=='+')
    {
        std:: cout << add(x, y);
    }

    else if (ch == '-')
    {
        std:: cout << sub(x, y);
    }

    else if (ch == '*')
    {
        std:: cout << multiply(x, y);
    }

    else if (ch == '/')
    {
        std:: cout << divide(x, y);
    }

    else{
        std::cout << "Choose a valid operator!";
    }

    return 0; 
}

double add(double x, double y)
{
    return x+y;
}

double sub(double x, double y)
{
    return x-y;
}

double multiply(double x, double y)
{
    return x*y;
}
double divide(double x, double y)
{
    if (y==0)
    {
        std::cout << "Cannot divide by 0!";
        return 0;
    }

    else{
        return x/y;
    }
}
