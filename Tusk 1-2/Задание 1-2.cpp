#include <iostream>
#include <cmath>

double edge;			//Designation of global variables


//A brief calculation of the volume
//Return 0 If no errors
int
CalculateVolume ()
{
  double Volume;
  Volume = pow (edge, 3);
  std::cout << "Volume=" << Volume << std::endl;
  return 0;
}


//A brief calculation of the face area
//Return 0 If no errors
int
CalculateFaceArea ()
{
  double FaceArea;
  FaceArea = pow (edge, 2);
  std::cout << "FaceArea=" << FaceArea << std::endl;
  return 0;
}


//A brief calculation of the total surface area
//Return 0 If no errors
int
CalculateTotalSurfaceArea ()
{
  double TotalSurfaceArea;
  TotalSurfaceArea = 6 * pow (edge, 2);
  std::cout << "TotalSurfaceArea=" << TotalSurfaceArea << std::endl;
  return 0;
}


//Brief Entry point
//Return 0 If no errors
int
main ()
{
  std::cout << "enter the edge: ";	//enter the value of two variables num1 and num2
  std::cin >> edge;
  CalculateVolume ();
  CalculateFaceArea ();
  CalculateTotalSurfaceArea ();
  return 0;
}