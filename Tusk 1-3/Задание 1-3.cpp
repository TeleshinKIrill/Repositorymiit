#include <iostream>
#include <cmath>

const double g =9.8;
double weight;		//Designation of global variables


//Notation of the formula for finding gravity
//Return 0 If no errors
int
CalculatingGravity ()
{
  double Gravity;
  Gravity=g*weight;
  std::cout << "bag weight="<< Gravity << std::endl;
  std::cout << "Gravity="<<Gravity<< std::endl;
  return 0;
}

//Brief Entry point
//Return 0 If no errors
int
main ()
{
  std::cout << "enter the mass-m";	//
  std::cin >> weight;
  CalculatingGravity ();
  return 0;
}