/*
author: aditya.mishra10@nmims.in

Topics covered:
    - switch block

    switch(x)
    {
        case constValue:
        return;

        defualt:
        return;
    }
*/




#include <iostream>

void printDigitName(int x)
{
    switch (x)
    {
    case 1:
        std::cout << "One";
        return;
        break;
    case 2:
        std::cout << "Two";
        return;
        break;
    case 3:
        std::cout << "Three";
        return;
        break;
    default:
        std::cout << "Unknown";
        return;
        break;
    }
}

int main()
{
    printDigitName(2);
    std::cout << '\n';

    return 0;
}
