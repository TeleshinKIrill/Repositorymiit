#include <iostream>

/**
* \brief User input of array elements.
* \param min_value - border on the array.
* \param max_value - array boundary.
*/

void input_manual (int *my_array, unsigned int n, int min_value,int max_value);

/**
* \brief Filling array elements with random numbers.
 * \param min_value - border on the array.
 * \param max_value - array boundary.
 * \param n is the size of the array.
 */

void input_random (int *my_array, unsigned int n, int min_value,int max_value);

/**
* \brief Output of array elements to the console.
 * \param min_value - border on the array.
 * \param max_value - array boundary.
 * \param n is the size of the array.
 */

void output_array (int *my_array, unsigned int n);

/**
*\*\brief Replacing array elements with odd numbers with squares of their numbers.
 * \param min_value - border on the array.
 * \param max_value - array boundary.
 * \param n is the size of the array.
 */
int function1 (int *my_array, unsigned int n);

/**
* \brief The product of elements having an even value.
 * \param min_value - border on the array.
 * \param max_value - array boundary.
 * \param n is the size of the array.
 */

void function2 (int *my_array, unsigned int n);

/**
* \brief Determines whether there are positive elements in this array that are divisible by a given number with a remainder of 2.
 * \param min_value - border on the array.
 * \param max_value - array boundary.
 * \param n is the size of the array.
 * \param pk - the specified number
 */

int function3 (int *my_array, unsigned int n, int *pk);




int main ()
{
  const int min_value = -15;
  const int max_value = 15;
  unsigned int n;
  std::cout << "enter the dimension of the array-";
  std::cin >> n;
  int *my_array = new int[n];
  std::cout << "do you want to enter numbers manually(1) or fill in randomly(0)?"<< std::endl;
  int b;
  while (true)
    {
      std::cin >> b;
      switch (b)
	{
	case 1:
	  input_manual (my_array, n, min_value, max_value);
	  break;
	case 0:
	  input_random (my_array, n, min_value, max_value);
	  break;
	default:
	  std::cout << "you can only enter 1 or 0 " << std::endl;
	  continue;
	}
      break;
    }
  std::cout << "got an array :" << std::endl;
  output_array (my_array, n);
  int result = function1 (my_array, n);	//the product of all even numbers from -15 to 15
  if (result == 1)
    {
      std::cout << "there are no even numbers in your array  " << std::endl;
    }
  else
    {
      std::cout << "the product of all even numbers from -15 to 15 is equal to " << result << std::endl;
    }
  function2 (my_array, n);	//replace all elements of the array with even numbers by the square of their number
  std::cout << " array after replacement : " << std::endl;
  output_array (my_array, n);	//array output
  int k;
  result = function3 (my_array, n, &k);	//numbers divisible by k with a remainder of 2
  if (result == 0)
    {
      std::cout <<"there are no numbers in the array that give the remainder of 2 branches on "<< k << std::endl;
    }
  else
    {
      std::cout << "in the array " << result << " numbers divisible by " << k <<" with a remainder of 2" << std::endl;
    }
  delete[]my_array;
}

void input_manual (int *my_array, unsigned int n, int min_value, int max_value)
{
  std::cout << "enter " << n << " numbers from  " << min_value << " before " <<max_value << std::endl;
  for (unsigned int index = 0; index < n; ++index)
    {
      while (true)
	{
	  std::cin >> my_array[index];
	  if (my_array[index] >= min_value && my_array[index] <= max_value)
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

void input_random (int *my_array, unsigned int n, int min_value, int max_value)
{
  for (unsigned int index = 0; index < n; ++index)
    {
      my_array[index] = rand () % 31 - 15;
    }
}

 void output_array (int *my_array, unsigned int n)
{
  for (unsigned int index = 0; index < n; ++index)
    {
      std::cout << my_array[index] << std::endl;
    }
}

 int function1 (int *my_array, unsigned int n)	//the product of all even numbers from -15 to 15
{
  int c = 1;
  for (unsigned int index = 0; index < n; ++index)
    {
      if (my_array[index] % 2 == 0)
	{
	  c *= my_array[index];
	}

    }
  return c;
}

void function2 (int *my_array, unsigned int n)	//replace all elements of the array with even numbers by the square of their number
{
  for (unsigned int index = 0; index < n; index += 2)
    {
      my_array[index] = index * index;
    }
}

int function3 (int *my_array, unsigned int n, int *pk)	//numbers divisible by k with a remainder of 2
{
  std::cout << "enter an integer greater than 2-";
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
  for (int index = 0; index < n; ++index)
    {
      if (my_array[index] % k == 2)
	{
	  ++d;
	  std::cout << d << std::endl;
	}
    }
  return d;
}


