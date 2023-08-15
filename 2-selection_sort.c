#include "sort.h"

/**
 * selection_sort - sort integer array in ascending order
 * @array: object array to be sorted
 * @size: size of array
 */

void selection_sort(int *array, size_t size)
{
	size_t swap = 0, nmin = 0, cmin = 0;
	int hold = 0;

	if (!array || !size)
		return;

	for (swap = 0; swap < (size - 1); swap++)
	{
		nmin = swap;
		for (cmin = swap + 1; cmin < size; cmin++)
			if (array[cmin] < array[nmin])
				nmin = cmin;
		if (nmin != swap)
		{
			hold = array[swap];
			array[swap] = array[nmin];
			array[nmin] = hold;
			print_array(array, size);
		}
	}
}
