#include "sort.h"
#include <stdio.h>

/**
 * bubble_sort - sort array from min to max
 * @array: array
 * @size: array size
 */
void bubble_sort(int *array, size_t size)
{
size_t i;
	int tmp, sorted;

	if (!array || size == 0)
		return;

	do {
		sorted = 1;
		for (i = 0; i < size - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				sorted = 0;
				tmp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = tmp;
				print_array(array, size);
			}
		}

	} while (sorted == 0);
}
