/*
author: aditya.mishra10@nmims.in

Topics covered:
    - Comma op: x, y ==> eval first x, then y, then returns the value of y (x--->y====>y)

The comma operator (,) allows you to evaluate multiple expressions wherever a single expression is allowed
Avoid using the comma operator, except within for loops.

*/

#include <iostream>

int main()
{
    int a{4};
    int b{5};

    std::cout << ++a, ++b << '\n';

    return 0;
}

