// program file for 3.16

#include <iostream>

int main()
{
    for(int i = 0; i < 4; ++i) {
        if(i == 0 || i == 3) 
            std::cout << "****\n";
        else
            std::cout << "*  *\n";
    }

    return 0;
}