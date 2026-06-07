/*
author: aditya.mishra10@nmims.in

Topics covered:
    - strings
    - taking multi word input
*/

#include <iostream>
#include <string>

int main()
{
    /*
    std::string s{"Faiz Ahemad Faiz"};
    std::cout << s;
    */

    /*
    std::string alone cannot store more than two values on input, for it ignores stuff after white-space
    std::cout << "Enter fav color: "; 
    std::string color{}; 
    std::cin >> color;
    std::cout << "Color is: " << color;

    */

    std::cout << "Enter your full name: ";
    std::string name{};

    std::getline(std::cin >> std::ws, name); //ws ===> whitespace, i.e, ignore leading whitespace

    std::cout << "Your name is: " << name;

    return 0; 

}


