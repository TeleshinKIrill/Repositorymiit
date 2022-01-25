#include <iostream>
#include <cmath>

/*
*\brief Calculation of the recurrent expression.
*\param k Index of a row member.
*\return Value of the recurrence relation.
*/
double sequenceRec(const size_t k);

/*
*\brief Calculation of the sum of the series.
*\param n Number of row members.
*\return Value of the amount.
*/
double Sum(const size_t n);

/*
*\brief Calculation of the sum of a series with a value greater than E.
*\param e Calculation error.
*\return Value of the amount.
*/
double SumE(const double e);

/*
*\brief Entry point to the program.
*\return 0 if successful.
*/
int main()
{
	std::cout << "Enter number of elements in sequence - ";
	size_t n = 0;
	std::cin >> n;

	std::cout << "Sum of elements = " << Sum(n) << "\n";

	std::cout << "Enter e = ";
	double e;
	std::cin >> e;
	std::cout << "Sum of elements less than e = " << SumE(e);
	return 0;
}

double sequenceRec(const size_t k)
{
	return pow((-1.0), k) / ((k + 1.0) * (k + 2.0));
}

double Sum(const size_t n)
{
	double sum = 1.0;
	for (size_t k = 0; k < n; k++)
	{
		sum += sequenceRec(k);
		k++;
	}
	return sum;
}

double SumE(const double e)
{
	size_t k = 0;
	double current, sum;
	current = sequenceRec(k);
	while (current > e) {
		sum = sum + current;
		k++;
		current = sequenceRec(k);
	}
	return sum;
}