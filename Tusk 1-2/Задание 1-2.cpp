#include <cmath>
#include <iostream>
/**
* \brief calculation of a given function CalculateVolume(edge)
* \ param function variables edge
* \ return calculated value of the function CalculateVolume
*/
double CalculateVolume(const double edge);
/**
* \brief calculation of a given function CalculateFaceArea(edge)
* \ param function variables edge
* \ return calculated value of the function CalculateFaceArea
*/
double CalculateFaceArea(const double edge);
/**
* \brief calculation of a given function CalculateTotalSurfaceArea(edge)
* \ param function variables edge
* \ return calculated value of the function CalculateTotalSurfaceArea
*/
double CalculateTotalSurfaceArea(const double edge);
/**
* \ brief function main
* \ param
* \return 0 if the program is executed
*/
int  main()
{
	double edge;
	std::cout << "enter the edge: ";
	std::cin >> edge;
	std::cout << "Volume=" << CalculateVolume(edge) << std::endl;
	std::cout << "FaceArea=" << CalculateFaceArea(edge) << std::endl;
	std::cout << "TotalSurfaceArea=" << CalculateTotalSurfaceArea(edge) << std::endl;
	return 0;
}
double CalculateVolume(const double edge)
{
	return pow(edge, 3);
}
double CalculateFaceArea(const double edge)
{
	return pow(edge, 2);
}
double CalculateTotalSurfaceArea(const double edge)
{
	return 6 * pow(edge, 2);
}
