#include "sort.h"

/**
 * bubble_sort - func using bubble sort algo to sort array
 *
 * @array: array integers
 * @size: size of array.
*/
void bubble_sort(int *array, size_t size)
{
	size_t x = 0, y;
	int sp;

	if (!size || !array)
	{
		return;
	}

	while (x < size)
	{
		for (y = 0; y < size - 1; y++)
		{
			if (array[y] > array[y + 1])
			{
				sp = array[y];
				array[y] = array[y + 1];
				array[y + 1] = sp;

				print_array(array, size);
			}
		}

		x++;
	}

}
