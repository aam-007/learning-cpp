/*
author: aditya.mishra10@nmims.in

Topics covered:
    - range based loops
    - reversing (using #include <ranges> std::view::reverse(name))

*/

#include <iostream>
#include <vector>
#include <string> 

/*
int main()
{

    std::vector<int> fib {0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89 };

    for(auto num : fib){     //    does not require us to use the array’s length, nor does it require us to index the array
        std::cout << num << '\n';
    }

    std::cout << '\n';

    return 0; 
}

//Favor range-based for loops over regular for-loops when traversing containers.
// Use type deduction (auto) with range-based for loops to have the compiler deduce the type of the array element.

*/

/*
int main()
{
    std::vector<std::string> words{ "peter", "likes", "frozen", "yogurt" };

    for (const auto& word : words) // word is now a const reference
        std::cout << word << ' ';

    std::cout << '\n';

    return 0;
}
    
*/

//reversing
#include <ranges>

int main(){

    std::vector<std::string> words {"ram", "nam", "sham"};

    for (auto& names : std::views::reverse(words)){
        std::cout << names << '\n'; 
    }

    std::cout << '\n';

    return 0; 

}