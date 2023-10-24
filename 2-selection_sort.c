#include "sort.h"

/**
 * selection_sort - sort array using selection Algorithm.
 * @array: array of numbers.
 * @size: size of array.
*/
void selection_sort(int *array, size_t size)
{
	int min;
	int swp;
	size_t itr, itr2;

	for (itr = 0; itr < size - 1; itr++)
	{
		min = itr;

		for (itr2 = itr + 1; itr2 < size; itr2++)
		{
			if (array[itr2] < array[min])
			{
				min = itr2;
				swp = array[min];
				array[min] = array[itr];
				array[itr] = swp;
			}
		}
		print_array(array, size);

	}
}
