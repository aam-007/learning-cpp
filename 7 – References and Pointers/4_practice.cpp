
#include <iostream>

int main()
{

    int a {6};
    int b {7};
    
    //ref creation
    int& num1 { a };
    int& num2 { b };

    //print 

    std :: cout << "a is: " <<  *(&num1) << '\n' << "b is: " << *(&num2) << '\n'; 

    //pointer creation

    int* pntr1;
    int* pntr2; 

    pntr1 = &num2; 
    pntr2 = &num1;

    std :: cout << "a is: " <<  *(pntr1) << '\n' << "b is: " << *(pntr2); 

    return 0; 
}