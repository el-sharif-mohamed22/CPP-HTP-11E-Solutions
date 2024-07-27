// Program that reads a nonnegative integer and computes and prints its
// factorial.

#include <boost/multiprecision/cpp_int.hpp>
#include <iostream>

using boost::multiprecision::cpp_int;
using std::cin;
using std::cout;

int main()
{

    cout << "Enter a nonnegative integer: ";
    int n{};
    cin >> n;
    int copy{n};

    cpp_int product{1};

    while (copy >= 2)
    {
        product *= copy;
        --copy;
    }

    cout << "Factorial of " << n << " = " << product << "\n";
}