#include "search_algos.h"

/**
 * jump_search - function that searches for a value
 * in a sorted array of integers
 *
 * @array: a pointer to the first element of the array to search in
 * @size:  the number of elements in array
 * @value: is the value to search for
 * Return: the first index where value is located
 */
int jump_search(int *array, size_t size, int value)
{
    size_t i, step, jump;

    if (array == NULL || size == 0)
        return (-1);

    step = sqrt(size);

    // Loop to find the range where the value may be
    for (i = jump = 0; jump < size && array[jump] < value;)
    {
        printf("Value checked array[%ld] = [%d]\n", jump, array[jump]);
        i = jump;
        jump += step;
    }

    // Print the range where the value may lie
    printf("Value found between indexes [%ld] and [%ld]\n", i, jump);

    // Adjusting the boundary if jump exceeds the size of the array
    jump = jump > size - 1 ? jump : size - 1;

    // Linear search within the identified range
    for (; i < jump && array[i] < value; i++)
        printf("Value checked array[%ld] = [%d]\n", i, array[i]);
    printf("Value checked array[%ld] = [%d]\n", i, array[i]);

    // Check if the value is found and return its index
    return (array[i] == value ? (int)i : -1);
}
