#include "sort.h"

/**
 * quick_sort - sort integer array into ascending order using quicksort method
 * @array: object array
 * @size: size of array
 */

void quick_sort(int *array, size_t size)
{
	if (!array || size < 2)
		return;

	sortinho(array, 0, size - 1, size);
}

/**
 * sortinho - sorts array segments recursively
 * @array: object array
 * @left: zero index
 * @right: last index
 * @size: size of array
 */

void sortinho(int *array, int left, int right, size_t size)
{
	int x = 0;

	if (left < right)
	{
		x = partition(array, left, right, size);
		sortinho(array, left, x - 1, size);
		sortinho(array, x + 1, right, size);
	}
}

/**
 * partition - partition array for sorting using lomuto scheme
 * @array: object array
 * @left: zero index
 * @right: last index
 * @size: size of array
 * Return: partition index
 */

int partition(int *array, size_t left, size_t right, size_t size)
{
	size_t x = 0, y = left;
	int pivot = 0;

	for (x = left, pivot = array[right]; x < right; x++)
		if (array[x] <= pivot)
		{
			if (x != y)
				swap(array, x, y), print_array(array, size);
			y++;
		}
	if (y != right)
		swap(array, right, y), print_array(array, size);

	return (y);
}

/**
 * swap - swaps array element positions
 * @array: object array
 * @x: input element 1
 * @y: input element 2
 */

void swap(int *array, int x, int y)
{
	int tmp = 0;

	tmp = array[x];
	array[x] = array[y];
	array[y] = tmp;
}
