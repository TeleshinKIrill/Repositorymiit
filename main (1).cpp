#include <iostream>
#include <cmath>
/**
*\ brief recursive calculation of the sum of the first n terms of the sequence
*\ param n - number of sequence members
*\ return the amount
*/
double sequenceRec(int n);
/**
*\ brief recursive calculation of the sum of the first terms of a sequence not less than a given number e
*\ param e - the specified number
*\ return the amount
*/
double sequenceRec2(double e);
int main()
{
int n;
double e;
std::cout << "Enter n "; std::cin >> n;
std::cout << "Enter e "; std::cin >> e;
std::cout << "The sum of the members of the sequence for n = " << n << " " << sequenceRec(n) << "\n";
std::cout << "The sum of the members of the sequence for e = " << e << " " << sequenceRec2(e) << "\n";
return 0;
}
double sequenceRec(int n)
{
double s = 1;
double member_sequence = 1;
for (int k = 2; k <= n; k++)
{
member_sequence = -member_sequence / (k*(k+1));
s += member_sequence;
}
return s;
}
double sequenceRec2(double e)
{
double s = 1;
double member_sequence = 1;
int k = 2;
do
{
member_sequence = -member_sequence / (k * (k + 1));
s += member_sequence;
k++;
} while (abs(member_sequence) > e);
return s;
}
