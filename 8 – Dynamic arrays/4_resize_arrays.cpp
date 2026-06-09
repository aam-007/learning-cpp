/*
author: aditya.mishra10@nmims.in

Topics covered:
    - resize()

*/
#include <iostream>
#include <vector>
#include <string>


int main()
{
    std::vector<std::string> vec(5);
    
    std::size_t size(vec.size());

    std::cout << "Size before resizing: " << size ;

    //resize

    vec.resize(10);
    std::size_t size(vec.size());
    std::cout << "Size after resizing: " << size ;




}