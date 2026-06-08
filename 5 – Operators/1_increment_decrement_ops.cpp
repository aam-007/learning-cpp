/*
author: aditya.mishra10@nmims.in

Topics covered:
    - ++x -> increment x, then return x
    - --x -> decrement x, the return x
    - x++ -> copy x, increment x, return copy
    - x-- -> copy x, decrement x, return copy
*/

#include <iostream>

int main()
{

    int num{5};
    int z(num++);

    std::cout << num << '\t' << z;

    return 0;

}