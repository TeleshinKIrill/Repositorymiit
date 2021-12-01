#include <iostream>
#include <cmath>

double Y_axis;//Designation of global variables

//a short formula for calculating the value on the Y axis
//Return 0 If no errors
int calculatingY_axisXoordinates(){
for (double x=0; x<2; x+=0.2){
Y_axis=0.29*pow(x,3)+x-1.2502;
std::cout<<"y=" << Y_axis <<std::endl;}
 return 0;
}


//a brief output of value values along the x axis
//Return 0 If no errors
int calculatinX_axisXoordinates(){
for (double x=0; x<2; x+=0.2){
std::cout<<"x=" << x <<std::endl;}
  return 0;
}

//Brief Entry point
//Return 0 If no errors
int main (){
  calculatingY_axisXoordinates();
  std::cout<<"--------"<<std::endl;
  calculatinX_axisXoordinates();
  return 0;
}
