#include <iostream>
#include <string>
int main()

{

    std:: string name;
    std::cout<<"Please enter your name: ";
    std::getline(std::cin,name);

    if(name.empty()){
        std::cout<<"You didn't entered name";
    }
    //std::cout<<"The length of your name is: "<<name.length();
    return  0;
}
