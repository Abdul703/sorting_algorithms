#include "sort.h"

/**
 * bubble_sort - sort array using bubble sort algorithm
 *
 * @array: the array to sort
 * @size: size of the array
 *
 * Return: void
*/
void bubble_sort(int *array, size_t size)
{
	size_t i, j;

	if (size >= 2)
	{
		for (i = 0; i < size - 1; i++)
		{
			for (j = 0; j < size - 1 - i; j++)
			{
				if (array[j] > array[j + 1])
				{
					swap_int(&array[j], &array[j + 1]);
				}
				print_array(array, size);
			}
		}
	}
}

/**
 * swap_int - swap 2 integers using pointer
 *
 * @a: the first integer
 * @b: the second integer
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
int initial_a;

initial_a = *a;
*a = *b;
*b = initial_a;
}
