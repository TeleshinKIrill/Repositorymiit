#include <cmath>
#include <iostream>

/**
* \ brief calculation of a given function a(x,y,z)
* \ param function variables x,y,z
* \ return function variables A
*/
double CalculateVarA(const double x, const double y, const double z);
/**
* \ brief calculation of a given function b(x,y,z)
* \ param function variables x,y,z
* \ return calculated value of the function B
*/
double CalculateVarB(const double x, const double y, const double z);
/**
* \brief function main
* \param
* \return 0,if the program is executed
*/
int  main()
{
	const double x = 1.825;
	const double y = 18.225;
	const double z = -3.298;
	std::cout << "x = " << x << " y = " << y << " z = " << z << " a = " << CalculateVarA(x, y, z) << " b = " << CalculateVarB(x, y, z);
	return 0;
}
double CalculateVarA(const double x, const double y, const double z)
{
	return pow(x, y / x) - pow(y / x, 1. / 3);
}
double CalculateVarB(const double x, const double y, const double z)
{
	return (y - x) + (((y - z) / (y - x)) / (3 + pow(z, 2) / 5));
}

