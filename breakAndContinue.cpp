#include <iostream>

int main()
{
    for(int x = 1;x <= 10;x++){

        if(x == 5){
            break; //when it reaches 5 it will stop executing the program.
                   //if you use continue it will print but will skip 5
        }


        std::cout<<x<<"\n";

    }
return 0;
}