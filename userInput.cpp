#include <iostream>
#include <string>


int main() {

    std::string name;
    int age;

    std::cout << "What is your name?";
    // std::cin>>name;
    std::getline(std::cin, name);

    std::cout << "What is your age?";
    std::cin>>age;

    std::cout<<"Hello, Welcome to C++ Programming "<<name<<'.';
    std::cout<<"You are "<<age;

    return 0;
}   


