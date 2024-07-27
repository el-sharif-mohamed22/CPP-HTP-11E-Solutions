// Program that computes the value of e^x by using formula.

#include <iomanip>
#include <iostream>

using std::cin;
using std::cout;

int main()
{

    cout << "Enter the value of x: ";
    int x{};
    cin >> x;

    cout << "Enter the number of terms in the summations: ";
    int accuracy{};
    cin >> accuracy;

    int numberOfTerms{0};

    long double result{0.0};
    while (numberOfTerms < accuracy)
    {
        // Calculating the numerator which is x^(accuracy - 1)
        long long numerator{1};
        int power{0};
        while (power < numberOfTerms)
        {
            numerator *= x;
            ++power;
        }

        // Calculating the denominator which is (accuracy - 1)!
        long long denominator{1};
        int n{numberOfTerms};
        while (n >= 2)
        {
            denominator *= n;
            --n;
        }

        result += static_cast<long double>(numerator) / denominator;
        ++numberOfTerms;
    }

    cout << std::fixed;
    cout << "e ^ " << x << " = " << result << '\n';
}