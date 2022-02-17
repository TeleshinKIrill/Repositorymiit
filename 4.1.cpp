#include <iostream>
#include <string>
#include <random>

using namespace std;

/**
 * \brief Checking the input of the array size.
 * \return The size of the array.
*/
size_t GetSize();

/**
* \brief Replacing array elements with odd numbers with squares of their numbers.
 * \param my_array array.
 * \param size the size of the array.
 * \return array.
*/
void get_product_even_numberss(int* my_array, const size_t size);

/**
* \brief Filling an array with random numbers.
 * \param size the size of the array.
 * \param min_value the minimum value of the array elements.
 * \param max_value is the maximum value of the array elements.
 * \return filled array.
*/
int* input_random(size_t size, int min_value, int max_value);

/**
* \brief Array output to the console.
 * \param my_array array.
 * \param size the size of the array.
 */
void output_array(const int* my_array, size_t size);

/**
* \brief The function determines whether there are positive elements divisible by a given number k with a remainder of 2.
 * \param my_array array.
 * \param size the size of the array.
 * \return true if available, false if not.
 */
bool finding_positive_elements (const int* my_array, const size_t size);

/**
 * \brief Calculation of the product of even array elements.
 * \param my_array array.
 * \param size the size of the array.
 * \return the Work.
*/
int product_elements_even_value (int* my_array, const size_t size);

/**
* \brief Method that returns an array filled in by the user.
 * \param size the size of the array.
 * \param min_value the minimum value of the array elements.
 * \param max_value is the maximum value of the array elements.
 * \return filled array.
 */
int* user_array(size_t size);

/**
 * \brief Array input options.
 */
enum class array_input_way
{
    random,keyboard
};
/**
* \brief Entry point to the program.
 * \return 0, if successful.
 */
int main()
{
    size_t size = GetSize();

    if (size == 0)
        return 1;

    cout << "How do you want to fill the array?\n";
    cout << static_cast<int>(array_input_way::random) << " - random,\n";
    cout << static_cast<int>(array_input_way::keyboard) << " - keyboard.\n";
    cout << "Your choice: ";
    int choice;
    cin >> choice;

    const auto chosen = static_cast<array_input_way>(choice);
    int* my_array = nullptr;

    auto min_value = 0;
    auto max_value = 0;
    cout << "Enter a range of array numbers (minimum first, then maximum) " << endl;
    cin >> min_value >> max_value;
    if (max_value <= min_value)
    {
        cout << "The wrong range is entered!" << endl;
    }

    switch (chosen)
    {
    case array_input_way::random: 
    {
        my_array = input_random(size, min_value, max_value);
        break;
    }
    case array_input_way::keyboard:
    {
        my_array = user_array(size);
        break;
    }
    }

    output_array(my_array, size);

    cout << "The product of even array elements: " << product_elements_even_value(my_array, size) << endl;

    cout << "Array with replaced elements: ";
    get_product_even_numberss(my_array, size);

    if (finding_positive_elements(my_array, size)) {
        cout << "There are positive elements divisible by a given number k with a remainder of 2";
    }
    else {
        cout << "There are no positive elements divisible by a given number k with a remainder of 2";
    }
    cout << endl;

    if (my_array != nullptr) {

        delete[] my_array;
        my_array = nullptr;

    }
    return 0;

}

size_t GetSize() {
    int size = 0;
    cout << "Enter the size of the array" << endl;
    cin >> size;
    if (size <= 0)
    {
        cout << "Incorrect size entered";
        return 0;
    }
    else
        return size;
};

void get_product_even_numberss(int* my_array, const size_t size) {
    for (size_t index = 0; index < size; index += 2) {
        my_array[index] = index * index;
    }
    output_array(my_array, size);
}

bool finding_positive_elements(const int* my_array, const size_t size) {
    int k = 0;
    int counte_lements = 0;
    cout << "Enter k " << endl;
    cin >> k;
    if (k < 3) {
        cout << "k < 3: The remainder of the division cannot be equal to 2. Enter k > 3 " << endl;
        return false;
    }

    for (size_t index = 1; index < size; index++) {
        if (my_array[index] > 0 && my_array[index] % k == 2) {
            counte_lements++;
        }
    }
    return counte_lements > 0;

}

int product_elements_even_value(int* my_array, const size_t size)
{
    int comp = 1;
    for (size_t index = 0; index < size; index++) {
        if (my_array[index] % 2 == 0)
            comp = comp * my_array[index];
    }
    return comp;
}

void output_array(const int* my_array, const size_t size)
{
    if (my_array == nullptr)
    {
        cout << "The array does not exist";
    }
    else {
        cout << "\nArray:\n";
        for (size_t index = 0; index < size; index++) {
            cout << my_array[index] << " ";
        }
        cout << "\n";

    }
}

int* input_random(const size_t size, const int min_value, const int max_value)
{
    random_device rd;

    mt19937 gen(rd());

     std::uniform_int_distribution<> uniformIntDistribution(min_value, max_value);

    auto* my_array = new int[size];

    for (size_t index = 0; index < size; index++)
    {
        my_array[index] = uniformIntDistribution(gen);
    }
    return my_array;
}

int* user_array(const size_t size)
{
    auto* array = new int[size];
    cout << "Введите элементы массива" << "\n";
    for (size_t index = 0; index < size; index++)
    {
        cin >> array[index];
    }
    return array;
}
