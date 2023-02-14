#include <iostream>

int main()

{
    // &&- check if both  conditions are true
    // || - check if one conditions is true
    // ! - reverses the logical state

    int number = 23;

    if(number > 0 && number < 50){ // You can use &&, ||, !
        std::cout<<"Correct";
    }

    else{
        std::cout<<"Wrong";
    }
    return 0 ;
}