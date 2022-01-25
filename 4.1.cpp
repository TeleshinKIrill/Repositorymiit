#include <iostream>

/**
* \brief User input of array elements.
 * \paramleft - border on the array.
 * \param right - array boundary.
 */
void input_manual(int* ar, int n, int left, int right);


/**
* \brief Filling array elements with random numbers.
 * \paramleft - border on the array.
 * \param right - array boundary.
 * \param n is the size of the array.
 */
void input_random(int* ar, int n, int left, int right);

/**
* \brief Output of array elements to the console.
 * \param left - border on the array.
 * \param right - array boundary.
 * \param n is the size of the array.
 */
void output_array(int* ar, int n);

/**
* \brief Replacing array elements with odd numbers with squares of their numbers.
 * \paramleft - border on the array.
 * \param right - array boundary.
 * \param n is the size of the array.
 */
int OddValue(int* ar, int  n);

/**
* \brief The product of elements having an even value.
 * \param left - border on the array.
 * \param right - array boundary.
 * \param n is the size of the array.
 */
void EvenValue(int* ar, int  n);

/**
* \brief Determines whether there are positive elements in this array that are divisible by a given number with a remainder of 2.
 * \param left - border on the array.
 * \param right - array boundary.
 * \param n is the size of the array.
 * \param pk - the specified number 
 */
int PositiveElements(int* ar, int  n, int* pk);

int main()
{
	const int left = -15;
	const int right = 15;
	int n;
	std::cout << "enter the dimension of the array" << std::endl;
	std::cin >> n;
	int* ar = new int[n];
	std::cout << "if you want to enter numbers manually, then select '1' or fill in randomly, then select '0' " << std::endl;
	int b;
	while (true)
	{
		std::cin >> b;
		switch (b)
		{
		case 1: input_manual(ar, n, left, right);
			break;
		case 0: input_random(ar, n, left, right);
			break;
		default:
			std::cout << "you can only enter 1 or 0" << std::endl;
			continue;
		}
		break;
	}
	std::cout << "got an array :" << std::endl;
	output_array(ar, n);
	int result = OddValue(ar, n);
	if (result == 1)
	{
		std::cout << "there are no even numbers in your array " << std::endl;
	}
	else
	{
		std::cout << "the product of all even numbers from -15 to 15 is equal to " << result << std::endl;
	}
	EvenValue(ar, n);
	std::cout << " array after replacement: " << std::endl;
	output_array(ar, n);
	int k;
	result = PositiveElements(ar, n, &k);
	if(result == 0)
	{
		std::cout << "there are no numbers in the array that give the remainder of 2 branches on" << k << std::endl;
	}
	else
	{
		std::cout << " in the arrayв массиве " << result << " numbers divisible by " << k << " with a remainder of 2 " << std::endl;
	}
}

void input_manual(int* ar, int n, int left, int right)
{
	std::cout << " enter " << n << " numbers from  " << left << " to " << right<< std::endl;
	for (int i = 0 ; i < n; ++i)
	{
		while (true)
		{
			std::cin >> ar[i];	
			if (ar[i] >= left && ar[i] <= right)
			{
				break;
			}
			else
			{
				std::cout << " repeat the input " << std::endl;
			}
		}
	}
}

void input_random(int* ar, int n, int left, int right)
{
	for (int i = 0; i < n; ++i)
	{
		ar[i] = rand() % 31 - 15;
	}
}

void output_array(int* ar, int n)
{
	for (int i = 0; i < n; ++i)
	{
		std::cout << ar[i] << std::endl;
	}
}

int OddValue(int* ar, int  n)
{
	int c = 1;
	for (int i = 0; i < n; ++i)
	{
		if ( ar[i] % 2 == 0)
		{
			c *= ar[i];
		}

	}
	return c;
}

void EvenValue(int* ar, int  n)
{
	for (int i = 0; i < n; i+=2)
	{
			ar[i] = i * i;
	}
}

int PositiveElements(int* ar, int  n, int* pk)
{
	std::cout << "enter an integer greater than 2" << std::endl;
	int k;
	
	while (true)
	{
		std::cin >> k;
		if (k > 2)
		{
			break;
		}
		else
		{
			std::cout << "repeat the input" << std::endl;
		}
	}
	*pk = k;
	int d = 0;
	for (int i = 0; i < n; ++i)
	{
		if (ar[i] % k == 2)
		{
			++d;
			std::cout << d << std::endl;
		}
	}
	return d;
}
