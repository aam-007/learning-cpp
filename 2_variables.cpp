/*
author: aditya.mishra10@nmims.in

Topics covered:
    – Variable definantion
    - Multiple Var defination
    - Var assignement
    - Types of Var inititialization

*/

#include <iostream>

/*
// Variable defination

int main()
{
    int x;  // define a variable named x (of type int)
    int y;
    double z;
    int j, k;
    // int j, int k is wrong!
    int i; int o;
    return 0;
}

*/

/*
// var assignmenet
int main()
{
    int width; //  define an integer variable named width
    width = 78;  // assignment of value 5 into variable width
    // std::cout << width; //print width

    //we can chage the value of a var once it has been assigned

    width = 90;
    std::cout << width;

    // normal vars hold one var at a time

    return 0;
}
*/

//var initialisation: process of specifying an initial value for an object

int main()
{
    int width {5};  // define variable width and initialize with initial value 5
    std::cout << width;
    return 0;

    double area = 80;
    float volume (90);
    int e {}; 

    // all behave in the same way. "{ }", i.e., list initializaton prefered. 
    // Primamry reason: using { }, the compiler will tell you of the data type mismatch
    // int yo {6.7}; will result in an error. in formal terms, list init. disallows narrow conversions. 

}

