/*
author: aditya.mishra10@nmims.in

Topics Covered:
-  static data type
*/


#include <iostream>

int getSeed()
{
    static int s{190000};
    return s;
}

int main()
{
    std::cout << getSeed();
}