#include "sort.h"

/**
 * bubble_sort - sort array of integers using bubble sort algorithm
 * @array: object integer array
 * @size: size of array
 */
void bubble_sort(int *array, size_t size)
{
	size_t i1 = 0, i2 = 0, hold = 0;

	if (!array || size < 2)
		return;
	for (i1 = 0; i1 < (size - 1); i1++)
		for (i2 = 0; i2 < (size - i1 - 1); i2++)
			if (array[i2] > array[i2 + 1])
			{
				hold = array[i2];
				array[i2] = array[i2 + 1];
				array[i2 + 1] = hold;
				print_array(array, size);
			}
}
