#include <iostream>
#include <cmath>

const double x =1.825;
const double y =18.225;
const double z =-3.298;


//brief Calculates the variable a
//Return 0 If no errors
int CalculateVarA(){
double a =pow(x,y/x)-pow(y/x,1./3);;
std::cout << "\na= " << a;
return 0;
}
//brief Calculates the variable b
//Return 0 If no errors
int CalulacteVarB(){
double b =(y-x)+(((y-z)/(y-x))/(3+ pow(z,2)/5));
std::cout <<"\nb= " << b;
return 0;

}
//brief Entry point
//Return 0 If no errors
int main() {
double x, y, z;
std::cout << "\nx= " << x << "\ny= " << y << "\nz= " << z;
CalculateVarA();
CalulacteVarB();
}

