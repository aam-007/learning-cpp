// check if number is a palindrom

#include <iostream>
#include <string>

bool isPalindrome(int x); 

int main()
{

    std :: cout << "Enter no.: ";

    int x{};

    std::cin >> x; 

    if (isPalindrome(x)){
        std::cout << "is palindorme";
    }

    else{
        std::cout << "not pallidrome"; 
    }

    return 0; 
}

bool isPalindrome(int x){

    std::string str{std::to_string(x)};

    int left{0};
    int right{static_cast<int>(str.size()) - 1};

    while(left < right){
        if (str[left] != str[right]){
            return false;
        }
        
        ++left;
        --right; 
    }

    return 0; 




}