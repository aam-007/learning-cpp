/*
author: aditya.mishra10@nmims.in

Topics covered:

    - Func parameters

*/

/*
#include <iostream>

void add(int x, int y)
{
    std::cout << x+y;
}

int main()
{

    add(6, 7);
    return 0;

}
*/

// code a program to take input from user, prints double of it (two diff fxns) 

/*
implimentation

getInput() -----> doDouble(int value) ------> main() {int num{getInput()}; doDouble(num)}

*/

#include <iostream>
/*
int getInput()
{
    std::cout << "Enter number: ";
    int input{};
    std::cin >> input;
    return input;

}

void doDouble(int value)
{
    std::cout << value << " doubled is " << value*2;

}

int main(){
   
    doDouble(getInput());

    return 0;
}
*/

// main takes no parameters

/*
Write a C++ program to calculate the value of:

(a+b)+(a×b)

where a and b are integers entered by the user. 
Implement the addition and multiplication operations using two separate user-defined functions, add() and multiply(). 
The final result should be computed using calls to these functions only.
Do not use arithmetic operators directly in the final expression inside main().
*/

int add(int x, int y)
{
    return x+y;

}

int multiply(int x, int y)
{
    return x*y;
}

int arithmatic(int x, int y)
{
    return add(x, y) + multiply(x, y);

}

int main()
{
    int x{};
    int y{};
    std::cout << "Enter two integers: ";
    std::cin >> x >> y;

    std::cout << arithmatic(x, y);

    return 0;
}