#include <iostream>
#include <cmath>
#include <iomanip>



/**
 * \brief Calculation function for the case, x >= 1 и x <= 2.
 * \param x Meaning x.
 * \param a Meaning a.
 * \return Meaning функции.
 */
double GetFunction1(const double x, const double a);

/**
 * \brief Calculation function for the case, когда x > 2.
 * \param x Meaning x.
 * \param a Meaning a.
 * \return Meaning функции.
 */
double GetFunction2(const double x, const double a);

/**
* \brief Entry point to the program
* \return Error code (0) success
*/
int main()
{
    const double a = 2;
    const double top = 2;
    const double b = 1;
    double x;
    std::cout << "Enter x = "; 
    std::cin >> x;
    double result;

     if (x > top)
    {
        result = GetFunction2(x, a);
    }
    else if (x < b)
    {
        result = 1;
    }
    else
    {
        result = GetFunction1(x, a);
    }
    std::cout << "y = " << std::setprecision(15) << result;
    return 0;
}

double GetFunction1(const double x, const double a)
{
	return a * pow(x, 2 * log(x)); 
}

double GetFunction2(const double x, const double a)
{
	 return exp(a * x) * cos(x);
}
