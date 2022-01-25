#define _USE_MATH_DEFINES 
#include <iostream>
#include <iomanip>
#include <cmath>


/**
* \brief Calculation of the perimeter of a right triangle
 * \param First Cathet - Length of the first cathet
 * \param Second Cathet - Length of the second cathet
 * \return The perimeter of a right triangle
 */
double getPerimeter(double FirstCathet, double SecondCathet);

/**
 * \brief Calculation of the area of a right triangle
 * \param First Cathet - Length of the first cathet
 * \param Second Cathet - Length of the second cathet
 * \return The area of a right triangle
 */
double getArea(double FirstCathet, double SecondCathet);

/**
 *\brief User choice of perimeter calculation (1) or area (0)
 */
enum class State { perimeter, area };

/**
* \brief Program entry point
* \return Error code (0) success
*/
int main()
{

	double FirstCathet, SecondCathet;
	std::cout << "Length of the first cathet - ";
	std::cin >> FirstCathet;
	std::cout << "Length of the second cathet - ";
	std::cin >> SecondCathet;
	std::cout << "Select an action (to calculate the area, select 0, to calculate the perimeter, select 1)";
	int input;
	std::cin >> input;
	const auto choice = static_cast<State>(input);


	switch (choice)
	{
	case State::perimeter:
	{
		const double Perimeter = getPerimeter(FirstCathet, SecondCathet);

		std::cout << "The perimeter of the triangle = " << Perimeter;
		break;
	}
	case State::area:
	{
		const double Area = getArea(FirstCathet, SecondCathet);
		std::cout << "The area of the triangle = " << Area;
		break;
	}
	}
	return 0;
}


double getPerimeter(double FirstKatet, double SecondKatet)
{
	return FirstKatet + SecondKatet + sqrt(FirstKatet * FirstKatet + SecondKatet * SecondKatet);
}


double getArea(double FirstKatet, double SecondKatet)
{
	return FirstKatet * SecondKatet / 2;
}
{
    return cathet1 + cathet2 + sqrt((pow(cathet1, 2)) + (pow(cathet2, 2)));
}

double CalculatingArea(const double cathet1, const double cathet2)
{
    return cathet1 * cathet2 / 2;
}