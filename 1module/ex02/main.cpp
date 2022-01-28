#include <string>
#include <iostream>

int main(){
    std::string basicString = "HI THIS IS BRAIN";
    std::string *stringPTR = &basicString;
    std::string &stringREF = basicString;

    std::cout << &basicString << std::endl;
    std::cout << stringPTR << std::endl;
    std::cout << &stringREF << std::endl;
    
    std::cout << basicString << std::endl;
    std::cout << *stringPTR << std::endl;
    std::cout << stringREF << std::endl;
}