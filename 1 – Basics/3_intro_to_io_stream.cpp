/*
author: aditya.mishra10@nmims.in

Topics covered:

    -cout
    -endl
    -cin
    - << operator (used for cout)
    - >> operator (used for cin)
    
*/

#include <iostream>
/*
// cout
int main()
{
    int num{5};
    char letter{'h'};
    int n2{78};

    std :: cout << num << letter; //to print on the same line
    std :: cout << "\n";
    std :: cout << "Sec num is: " << n2; 
    

    return 0; 


}

*/

/* 
// endl
int main()
{
    std :: cout << "Hello" << std::endl; //endl -> end line: moves cursour to next line
    std :: cout << "This is cpp \n"; 

    // Prefer \n over std::endl when outputting text to the console.


    return 0;
}

*/

int main()
{

    std :: cout << "Enter a number: "; //output (c-OUT) a string asking user to enter number
    int x{}; // define var to hold value

    std :: cin >> x; // (c-IN) get number from keyboard and store it in variable x

                //notice the ">>". I think of it as assigining value. 

                // cin -> >>
                //cout 0> <<

    std::cout << "You entered: " << x; 

    return 0; 

}

