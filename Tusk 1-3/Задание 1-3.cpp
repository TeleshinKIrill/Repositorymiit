#include <cmath>
#include <iostream>
/**
*\brief bag weight
*\param  - the value of mass and the value of the gravitational constant
*\return gravity
*/
double getMass(const double weight, const double g);
/**
* \ brief function main
* \ param
* \return 0 if the program is executed
*/
int main()
{
	double weight;
	const double g = 9.8;
	std::cout << "enter the mass-m=";
	std::cin >> weight;
	std::cout << "bag weight=" << getMass(weight, g) << std::endl;
	std::cout << "Gravity=" << getMass(weight, g);
	return 0;
}
double getMass(const double weight, const double g)
{
	return (g * weight);
}