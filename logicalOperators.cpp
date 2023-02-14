#include <iostream>

int main()

{

    int number = 23;

    if(number > 0 && number < 50){ // You can use &&, ||, !
        std::cout<<"Correct";
    }

    else{
        std::cout<<"Wrong";
    }
    return 0 ;
}