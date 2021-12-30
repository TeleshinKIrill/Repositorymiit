#define _USE_MATH_DEFINES // for C++
#include <iostream>
#include <iomanip>
#include <cmath>

/**
 * \brief Calculation of the triangle perimeter.
 * \param cathet1 cathet2 triangle cathets.
 * \return Triangle perimeter.
 */
double CalculatingPerimeter(const double cathet1, const double cathet2);


/**
* \brief Calculation of the triangle Area.
 * \param cathet1 cathet2 triangle cathets.
 * \return Triangle Area.
 */
double CalculatingArea(const double cathet1, const double cathet2);

/**
* \brief User choice of calculating either the Area of the triangle (0),
* or the surface Perimeter of the triangle (1)
 */
enum class ActionChoice { Area, Perimeter };

/**
 * \brief The entry point to the program.
 * \return Error code (0 - success).
 */
int main()
{
    double cathet1, cathet2;
    std::cout << "enter a cathet1= ";
    std::cin >> cathet1;
    std::cout << "enter a cathet2= ";
    std::cin >> cathet2;

    std::cout << "Enter an action on the triangle (Area = 0, Perimeter = 1) ";
    int input;
    std::cin >> input;

    const auto choice = static_cast<ActionChoice>(input);

    switch (choice)
    {
    case ActionChoice::Perimeter:
    {
        const auto Perimeter = CalculatingPerimeter(cathet1, cathet2);
        std::cout << "the perimeter of the triangle = " << Perimeter;
        break;
    }
    case ActionChoice::Area:
    {
        const auto Area = CalculatingArea(cathet1, cathet2);
        std::cout << "the Area of the triangle  = " << Area;
        break;
    }
    }
    std::cout << std::endl;
    return 0;
}
double CalculatingPerimeter(const double cathet1, const double cathet2)
{
    return cathet1 + cathet2 + sqrt((pow(cathet1, 2)) + (pow(cathet2, 2)));
}

double CalculatingArea(const double cathet1, const double cathet2)
{
    return cathet1 * cathet2 / 2;
}