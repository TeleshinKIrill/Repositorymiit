#include <cmath>
#include <iostream>
/**
*\brief bag weight
*\param  - the value of mass and the value of the gravitational constant
*\return gravity
*/
double weight(const double weight1, const double g);
/**
* \ brief function main
* \ param
* \return 0 if the program is executed
*/
int main()
{
	double weight1;
	const double g = 9.8;
	std::cout << "enter the mass-m=";
	std::cin >> weight1;
	std::cout << "bag weight=" << weight(weight1, g) << std::endl;
	std::cout << "Gravity=" << weight(weight1, g);
	return 0;
}
double weight(const double weight1, const double g)
{
	return (g * weight1);
}