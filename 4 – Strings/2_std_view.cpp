/*
author: aditya.mishra10@nmims.in

Topics covered:
    - std::string_view
*/

// code: a fxn which displayes text. 

#include <iostream>
#include <string_view> // gives access to std::string_view => read only access (cant modify)
#include <string>


void disp(std::string_view input)
{
    std::cout << input;
}


int main()
{

    std::cout << "Enter a sentence: ";
    std::string input{};
    std::getline(std::cin >> std::ws, input);

    disp(input);

    return 0;
}