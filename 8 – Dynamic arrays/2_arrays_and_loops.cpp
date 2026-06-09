/*
author: aditya.mishra10@nmims.in

Topics covered:
    - related vars 
    - std::size_t 
    - loops and arrays

*/

#include <iostream>
#include <vector>

int average();
int loops();

int main()
{

    std::cout << "Avg: " << average() << '\n';
    std::cout << "Avg: " << loops() << '\n';

    return 0;
}


int loops()
{
    //finding avg using for loop

    std::vector<int> testSore {100, 78};
    std::size_t length {testSore.size()};

    int average{0}; //init. avg 
    for (std::size_t index{0}; index < length; ++index){  // for (start, end, step)
        average = average + testSore[index];
    }

    average /= static_cast<int>(length);


    return average;
}

int average()
{
    std::vector<int> testSore {100, 78};
    std::size_t length {testSore.size()}; //std::size_t --> unsigned dtype. since, size cannot be -ve

    int average {};

    average = (testSore[0] + testSore[1])/static_cast<int> (length); 

    return average;

}

