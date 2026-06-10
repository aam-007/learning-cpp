#include <iostream>
#include <string>
#include <algorithm>


int main()
{
    std::string str {"This is a string"};

    //access
    std::cout << str.front() << '\n';
    std::cout << str.back()  << '\n';
    std::cout << str[0] << '\n';

    //length
    std::cout << str.length() << '\n';
    std::cout << str.size()  << '\n';

    //modify
    str = str + ", and this has been appended to it.";
    std::cout << str << '\n';
    str.push_back(':)');
    str.pop_back();
    // str.clear()

    //Insert
    str.insert(4, "yo");
    str.erase(0, 2);

    str.substr(0, 5);

    //Find 
    str.find("hel");
    
    if(str.find("hel") != std::string::npos){
        std::cout << "found" << '\n';
    }

    //convert
    int x{std::stoi(str)}; //stoi -> string to integer
    std::string s{std::to_string(x)};

    //reverse
    std::reverse(str.begin(), str.end()) ; 
}