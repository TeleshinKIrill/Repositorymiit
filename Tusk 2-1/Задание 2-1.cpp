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
double getPerimeter(const double first_cathet,const double second_cathet);

/**
 * \brief Calculation of the area of a right triangle
 * \param First Cathet - Length of the first cathet
 * \param Second Cathet - Length of the second cathet
 * \return The area of a right triangle
 */
double getArea(const double first_cathet,const  double second_cathet);

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
	
	double first_cathet, second_cathet;
	std::cout << "Length of the first cathet - "; 
	std::cin >> first_cathet;
	std::cout<<  "Length of the second cathet - ";
	std::cin>> second_cathet;
	std::cout << "Select an action (to calculate the area, select 0, to calculate the perimeter, select 1)";
	int input;
	std::cin >> input;
	const auto choice = static_cast<State>(input);

	
	switch (choice)
	{
	case State::perimeter:
	{
		const double Perimeter = getPerimeter( first_cathet, second_cathet);
		
		std::cout << "The perimeter of the triangle = " << Perimeter;
		break;
	}
	case State::area:
	{
		const double Area = getArea(first_cathet, second_cathet);
		std::cout << "The area of the triangle = " << Area;
		break;
	}
	}
	return 0;
}


double getPerimeter(const double first_cathet,const  double second_cathet)
{
	return first_cathet + second_cathet + sqrt(first_cathet * first_cathet + second_cathet * second_cathet);
}


double getArea(const double first_Katet, const double second_cathet)
{
	return first_Katet * second_cathet / 2;
}

