#include <iostream>

int main ()

{
    int number;

    std::cout<< "Please enter a number:";
    std::cin>>number;

    if(number == 23){
        std::cout<<"That is my favorite number.";
    }

    else if(number < 23){
        std::cout<<"Number is too low";
    }

    else{
         std::cout<<"Number is too high";
    }

    return 0;
}