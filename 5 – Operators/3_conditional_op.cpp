/*
author: aditya.mishra10@nmims.in

Topics covered:
    - "( x + a ) ? y:z "

*/

#include <iostream>

int main(){
    int a{4};
    int b{6};
    
    std::cout << ((a<b) ? a+b : b-a);

    return 0;
}