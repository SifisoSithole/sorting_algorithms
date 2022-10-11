#include <stdlib.h>
#include "sort.h"

/**
 * bubble_sort - This function sorts an array of integers using the
(* bubble sort algorithm
 *
 * @array: Array of integers
 * @size: size of the array
 */
void bubble_sort(int *array, size_t size)
{
	size_t swped = 0, i = 0;
	int temp;

	do {
		swped = 0;
		for (i = 0; i < size - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				temp = array[i + 1];
				array[i + 1] = array[i];
				array[i] = temp;
				swped = 1;
				print_array(array, size);
			}
		}
	} while (swped);
}
