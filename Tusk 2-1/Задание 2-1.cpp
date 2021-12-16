#include <cmath>
#include <iostream>
/**
* \brief calculation of a given function CalculatingPerimeter(const double cathet1, const double cathet2)
* \ param function variables edge
* \ return calculated value of the function CalculatingPerimeter
*/
	  double CalculatingPerimeter(const double cathet1, const double cathet2);
  /**
  * \brief calculation of a given function CalculatingPerimeter(const double cathet1, const double cathet2)
  * \ param function variables edge
  * \ return calculated value of the function CalculatingPerimeter
  */
  double CalculatingArea(const double cathet1, const double cathet2);
  /**
  * \ brief function main
  * \ param
  * \return 0 if the program is executed
  */
  int  main()
  {
	  double cathet1, cathet2;
	  std::cout << "enter a cathet1 ";
	  std::cin >> cathet1;
	  std::cout << "enter a cathet2: ";
	  std::cin >> cathet2;
	  std::cout << "Perimeter=" << CalculatingPerimeter(cathet1, cathet2) << std::endl;
	  std::cout << "Area=" << CalculatingArea(cathet1, cathet2);
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
