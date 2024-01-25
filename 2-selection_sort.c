#include "sort.h"

/**
 * selection_sort - sort array using selection sort algorithm
 *
 * @array: the array to sort
 * @size: size of the array
 *
 * Return: void
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j;
	int temp, small_number, index;

	if (size >= 2)
	{
		for (i = 0; i < size; i++)
		{
			small_number = array[i];

			for (j = i + 1; j < size; j++)
			{
				if (array[j] < small_number)
				{
					small_number = array[j];
					index = j;
				}
			}

			if (small_number != array[i])
			{
				temp = array[i];
				array[i] = small_number;
				array[index] = temp;
				print_array(array, size);
			}
		}
	}
}
