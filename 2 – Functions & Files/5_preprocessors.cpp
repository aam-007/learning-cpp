/*
author: aditya.mishra10@nmims.in

Topics covered:

    - #DEFINE 


*/


// #define IDENTIFIER sub_text

#include <iostream>
#define PI 3.14;

int getInput()
{
    std::cout << "Enter number to be mutiplied by pi: ";
    int num{};
    std::cin >> num;
    return num;

}

int multiply(int x)
{
    std::cout << x*PI;

    return 0;
}

int main()
{
    multiply(getInput());
    return 0;

}