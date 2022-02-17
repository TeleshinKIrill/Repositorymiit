#include <iostream>
#include <random>

using namespace std;

/**
 * \brief Array size input function.
 * \return Returns the size of the array.
 */
size_t getSize();

/**
* \brief Filling an array with random numbers.
 * \param size the size of the array.
 * \param min_value the minimum value of the array elements.
 * \param max_value is the maximum value of the array elements.
 * \return Returns a filled array.
 */
int* input_random(size_t size, int min_value, int max_value);

/**
 * \short description Array output.
 * \parameter new_array array.
 * \size of the array size parameter.
*/
void output_array(const int* new_array, const size_t size);

/**
 * \brief Function of filling the array manually
 * \param size the size of the array.
 * \return Returns a filled array.
 */
int* user_array(size_t size);

/**
 *\brief Replacing array elements with odd numbers with squares of their numbers.
 * \param min_value - border on the array. 
 * \param max_value - array boundary.
 */
void get_product_even_numbers(const int* new_array, size_t size);

/**
* \brief The product of elements having an even value.
 * \param min_value - border on the array.
 * \param max_value - array boundary.
 */
void product_elements_even_value(const int* new_array, size_t size);

/**
 * \brief Determines whether there are positive elements in this array that are divisible by a given number with a remainder of 2.
 * \param size the size of the array.
 * \return Returns the product of array elements by their numbers
 */
void finding_positive_elements(const int* new_array, const size_t size,int* pk);

/**
* \brief Array input options.
 */
enum class ARRAY_INPUT
{
	RANDOMLY, MANUALLY
};

/**
* \brief Program entry point
 * \return returns 0 if successful
 */
int main()
{
	size_t size = getSize();

	cout << "Fill in the array:\n";
	cout << static_cast<int>(ARRAY_INPUT::RANDOMLY) << " - accidentally,\n";
	cout << static_cast<int>(ARRAY_INPUT::MANUALLY) << " - manually.\n";
	int choice;
	cin >> choice;

	const auto chosen = static_cast<ARRAY_INPUT>(choice);

	int* new_array = nullptr;

	auto min_value = -15;
	auto max_value = 15;

	switch (chosen)
	{
	case ARRAY_INPUT::RANDOMLY:
	{
		new_array = input_random(size, min_value, max_value);
		break;
	}
	case ARRAY_INPUT::MANUALLY:
	{
		new_array = user_array(size);
		break;
	}
	}

	output_array(new_array, size);

	get_product_even_numbers(new_array, size);

	product_elements_even_value(new_array, size);

	finding_positive_elements(new_array, size);

	if (new_array != nullptr)
	{
		delete[] new_array;
		new_array = nullptr;
	}

	return 0;
}

size_t getSize()
{
	int size = 0;
	cout << "Enter the size of the array" << endl;
	cin >> size;
	if (size <= 0)
	{
		cout << "Incorrect size";
		return 0;
	}
	else
		return size;
};

void output_array(const int* new_array, const size_t size) 
{
	if (new_array == nullptr)
	{
		cout << "The array does not exist\n";
	}
	else
	{
		cout << "Array:\n";
		for (int index = 0; index < size; index++)
		{
			cout << new_array[index] << " ";
		}
		cout << "\n";

	}
}

int* input_random(const size_t size, const int min_value, const int max_value)
{
	random_device rd;
	mt19937 gen(rd());
	const std::uniform_int_distribution<> uniformIntDistribution(min_value, max_value);
	auto* new_array = new int[size];

	for (int index = 0; index < size; index++)
	{
		new_array[index] = uniformIntDistribution(gen);
	}
	return new_array;
}

int* user_array(const size_t size) 
{
	auto* array = new int[size];
	cout << "Enter the array elements" << "\n";

	for (size_t index = 0; index < size; index++)
	{
		cin >> array[index];
	}

	return array;
}

void get_product_even_numbers(const int* new_array, const size_t size)
{
	int count = 0;
	int mult = 1;

	if (new_array == nullptr)
	{
		cout << "The array does not exist\n";
	}

	for (size_t index = 0; index < size; ++index)
	{
		if (new_array[index] % 2 == 0)
		{
			mult *= new_array[index];
			count++;
		}
	}
	if (count == 0)
	{
		cout << "There are no such elements\n";
	}
	else
	{
		cout << "The product of even elements: " << mult << "\n\n";
	}
}

void product_elements_even_value(const int* new_array, const size_t size)
{
	cout << "array after replacement :";
	for (size_t index = 0; index < size; index+=2)
	{
			new_array[index]= index*index;
			output_array(new_array, size);
	}
}   

void finding_positive_elements(const int* new_array, const size_t size,int* pk)
{
	cout << "enter an integer greater than 2" << endl;
	int k;
	int count = 0;
	while (true)
	{
		cin >> k;
		if (k > 2)
		{
			break;
		}
		else
		{
			cout << "repeat the input" << endl;
		}
	}
	*pk = k;
	int d = 0;
	for (int index = 0; index < size ; ++index)
	{
		if (new_array[index] % k == 2)
		{
			++d;
			cout << d << endl;
			count++;
		}
	}
	if(count== 0)
	{
		cout << "there are no numbers in the array that give the remainder of 2 from division by " << k << endl;
	}
	else
	{
		cout << "in the array " << d << " numbers divisible by " << k << " with a remainder of 2" << endl;
	}
	
}
