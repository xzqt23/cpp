#include <iostream>
#include <typeinfo>
int main () {

    //implicit => automatic
    // explicit => precede value with a new data type


    int num1 = 23;
    double num2;

    num2 = num1; // implicit

    // std::cout <<"int = " << num1 <<'\n';
    // std::cout <<"double = "<< num2;

    // explicit
    
    double x = (int)3.14; //convert 3.14 to int
    
    std::cout<<x;
 
    return 0;

}   