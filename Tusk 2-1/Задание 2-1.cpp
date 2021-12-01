#include <iostream>
#include <cmath>

double cathet1, cathet2;	//Designation of global variablesCalculation of the triangle perimeter
//ACalculation of the triangle perimeter
//Return 0 If no errors
  int
CalculatingPerimeter ()
{
  double Perimeter;
  Perimeter =cathet1 + cathet2 + sqrt ((pow (cathet1, 2)) + (pow (cathet2, 2)));
  std::cout << "perimeter=" << Perimeter << std::endl;
  return 0;
}


//Calculating the area of a triangle
//Return 0 If no errors
int
CalculatingArea ()
{
  double Area;
  Area = cathet1 * cathet2 / 2;
  std::cout << "Area=" << Area << std::endl;
  return 0;
}

//Brief Entry point
//Return 0 If no errors
int main ()
{
  std::cout << "enter a cathet1 ";	//enter the value of two variables cathet1 and  cathet2
  std::cin >> cathet1;
  std::cout << "enter a cathet2: ";
  std::cin >> cathet2;
  CalculatingArea ();
  CalculatingPerimeter ();
  return 0;
}
