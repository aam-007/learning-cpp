/*
author: aditya.mishra10@nmims.in

Topics covered:
- using value returning fxns
- re-using fxns

*/

//A value-returning function will return a value each time it is called.


/*

Ques: Write a user defined fxn which takes user input, and doubles it
Implimetation:
    - write a fxn which returs in data type
    - call it in main fxn and double

*/



#include <iostream>

/*
int getValue() // int is the return type
{
    std::cout << "Enter value: \n";
    int x{};
    std::cin >> x;
    return x;
}


int main()
{
    int num{getValue()};
    std::cout << num << " doubled is: " << num*2;
    return 0;
}
*/

//Re using functions:
int getInput(){
    std::cout << "Enter value: \n";
    int num{};
    std::cin >> num;
    return num;
}

int main()
{
    int x{getInput()};
    int y{getInput()};

    std::cout << x << " + " << y << " is " <<x+y << '\n';

    return 0;
}