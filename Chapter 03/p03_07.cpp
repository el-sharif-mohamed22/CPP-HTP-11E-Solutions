// program file for 3.7

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    int counter{0};
    int number{0};
    int largest{0};

    while(counter < 10) {
        cout << "Enter a number: ";
        cin >> number;

        if(number > largest)
            largest = number;

        counter++;
    }

    cout << "The largest number is " << largest << endl;

    return 0;
}