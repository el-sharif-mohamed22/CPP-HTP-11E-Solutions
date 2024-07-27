// Program that estimates the value of the mathematical constant e.

#include <iomanip>
#include <iostream>

using std::cin;
using std::cout;

int main()
{

    cout << "Enter the number of terms in the summation (1 - 10): ";
    int accuracy{};
    cin >> accuracy;

    double eValue{0.0};
    int termNumber{0};

    while (termNumber < accuracy)
    {

        long long factorial{1};
        int copyOfTermNumber{termNumber};
        while (copyOfTermNumber >= 2)
        {
            factorial *= copyOfTermNumber;
            --copyOfTermNumber;
        }

        double term{1.0 / factorial};
        eValue += term;

        ++termNumber;
    }
    cout << std::fixed;
    cout << "Estimation of value of e with " << accuracy << " terms is "
         << eValue << '\n';
}