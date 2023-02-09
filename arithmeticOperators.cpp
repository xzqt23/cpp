#include <iostream>

int main(){


    int num = 20;
    int remainder = num % 3;
    // num = num+1;
    // num+=1; //add + 1 or you can try num++ to add 1 value

    num/=3; // output is 6, it's not including the decimal value since it's an int
    // to get the right value use double instead of int


    std:: cout << num <<'\n';
    std:: cout << remainder; // the remainder is 2
    return 0;   

}