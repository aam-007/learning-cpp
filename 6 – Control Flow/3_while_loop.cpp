/*
author: aditya.mishra10@nmims.in

Topics Covered:
-  while (condition){
    action 
}

*/

#include <iostream>

/*
int main()
{
    std :: cout << "Enter n: ";
    int n{};
    std :: cin >> n;

    std :: cout << "first " << n << " numbers are: ";

    int i{0};
    while (i < n)
    {
        ++i;
        std :: cout << i << " " ;
    }

    return 0; 
}

*/

// Intentional infinite loop

int main()
{
    while(true)
    {
        std :: cout << "Continue loop? (y/n): ";
        char c{};
        std :: cin >> c;

        if (c == 'n'){
            return 0;
        }

    }

    return 0;
}