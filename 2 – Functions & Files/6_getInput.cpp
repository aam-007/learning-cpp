#include "6_getInput.h"
#include <iostream>

int getInput()
{
    std::cout << "entere number: ";
    int num{};
    std::cin >> num;

    std::cout << "You entered number: " << num;

    return num; 

}