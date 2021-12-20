#include <iostream>
#include <cmath>
/**
*\ brief  The volume of the Parallelepiped
*\ param width,length,height
*\ return volume
*/
double funct(double x);
/**
*\ brief  The area of the Parallelepiped
*\ param width,length,height
*\ return  area
*/
int main()
{
    double x;
    for (int i = 0; i <= 10; i++)
    {
        x = 0.0 + 0.2 * i;
        std::cout << "For x=" << x << " y= " << funct(x) << "\n";
    }
    return 1;
}
double funct(double x)
{
    return 0.29 * pow(x, 3) + x - 1.2502;
}