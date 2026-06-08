/*
author: aditya.mishra10@nmims.in

Topics covered:
    - de-ref. op (*x) -> returns the value at a given memory address as an lvalue
    - pointers (int*) -> A pointer is an object that holds a memory address (typically of another variable) as its value. 


*/

#include <iostream>
/*

de-refrences

int main()
{
    int x{ 7 };

    std :: cout << "Value of x: " << x << '\n';
    std :: cout << "Addrr of x: " << &x << '\n';
    
    std :: cout << "Value stored @ addr " << " " << &x << " is: " << *(&x); 

    return 0; 



}

*/

/*
int main()
{
    int x{ 5 };

    int* pntr (&x) ; //holding x's addrr.

    std :: cout << *pntr; // prints the value pntr's address holds

    return 0; 
}
*/

// changing pointer addrr


int main(){
    int x{5};
    int* pntr(&x); //storing addr of x;

    std :: cout << "Addr of: " << x << " is " << &x << '\n'; 

    int y { 7 };
    pntr = &y; //change ptr to point at y

    std::cout << *pntr << '\n';

    return 0; 

}