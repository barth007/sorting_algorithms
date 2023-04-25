#include "sort.h"
/**
 * swap - its swaps value of each variable
 *
 * @x: first variable
 * @y: second variable
**/
void swap(int *x, int *y)
{
	int temp;

	temp = *x;
	*x = *y;
	*y = temp;
}
/**
 * bubble_sort - compares two element of a list and swaps them if not
 * in correct position.
 *
 * @array: the list to be sorted
 * @size: length of the array
**/
void bubble_sort(int *array, size_t size)
{
	size_t i, j;

	if (array == NULL || size == 0)
		return;
	if (size < 2)
		return;
	for (i = 0; i < size - 1; i++)
	{
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1] && array[j + 1])
			{
				swap(&array[j], &array[j + 1]);
				print_array(array, size);
			}
		}
	}
}
