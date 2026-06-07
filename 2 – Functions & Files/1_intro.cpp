/*
author: aditya.mishra10@nmims.in

Topics covered:
    - Basic struct of a user defined fxn 

*/

#include <iostream>

/*
returnType (int, void, etc.) functionName() //fxn header 
{
    //body
}
*/

/*
void doPrint() //fxn header 
{
    std::cout << "Hello World! \t" << "In print function \n"; //body
}

int main()
{
    std::cout << "In main! \n";
    doPrint();   //calling print fxn. inturupting main
    doPrint();   //calling it again
    std::cout << "In main again! ";

    return 0;
}

*/


void doB()
{
    std::cout << "You are now in function B! \n";
   
}

void doA()
{
    std::cout << "You are now in function A! \n";
    std::cout << "Running fxn B \n";
    doB();

}

int main()
{
    doA();
    std::cout << "Running B seperately! \n";
    doB();
    std::cout << "You are  now in the main fuction! \n";
    return 0;
}

//Note: nested fxns are not allowed

/*
#include <iostream>

int main()
{
    void foo() // Illegal: this function is nested inside function main()
    {
        std::cout << "foo!\n";
    }

    foo(); // function call to foo()

    return 0;
}
*/