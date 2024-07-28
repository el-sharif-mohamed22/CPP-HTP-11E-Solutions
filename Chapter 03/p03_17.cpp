// program file for 3.17

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    int number{0};
    int counter{5};
    int check{0};

    cout << "Enter a five digit integer: ";
    cin >> number;

    int copy{number};

    while(counter > 0) {
        int ten{1};

        for(int i = 1; i < counter; ++i)
            ten *= 10;

        int digit = number / ten;
        check = check * 10 + digit;
        number /= 10;
        counter--;
    }


    cout << "It is ";
    if(copy != check) 
        cout << "not ";

    cout << "a palindrome.";

    return 0;
}