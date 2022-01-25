#include <iostream>
#include <cmath>
#include <iomanip>



/*
*\brief Finds the value of the function.
*\param x Meaning x.
*\param a Meaning a=0.29.
*\param b Meaning b=1.2502.
*\return Meaning y.
*/
double GetY(double x, double const a, double const b);

/**
* \brief Entry point to the program
* \return Error code (0) success
*/
int main()
{
    double const a = 0.29, b = 1.2502;
    double left, right, step;
    std::cout << "Enter left limit of interval- ";
    std::cin >> left;
    std::cout << "Enter right limit of interval- ";
    std::cin >> right;
    std::cout << "Enter value of step- ";
    std::cin >> step;

    double x = left;
    while (x <= right)
    {
        std::cout << std::setprecision(5) << GetY(x, a, b) << std::endl;
        x += step;
    }
    return 0;
}

double GetY(double x, double const a, double const b)
{
    return a * pow(x, 3) + x - b;
}