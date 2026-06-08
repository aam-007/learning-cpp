/*
author: aditya.mishra10@nmims.in

Topics covered:
    - if-else block
*/

#include <iostream>
#include <string>


int main()
{
    std::cout << "Enter passw: ";
    std::string pass{};
    std::getline(std::cin >> std::ws, pass);

    std::cout << "Enter passw again: ";
    std::string rePass{};
    std::getline(std::cin >> std::ws, rePass);

    if (pass == rePass){
        std::cout << "Same passw";
    }

    else if (pass != rePass){
        std::cout << "Diff passw";
    }

    else std::cout << "invalid input!";

    return 0;

}