#include "search_algos.h"
/**
* binary_search - searches for a value in a sorted array of integers using
* the Binary search algorithm
*
* @array: Pointer to the beginning of an array
* @size: The size of the array
* @value: value to search for
*
* Return: Nothing
*/
int binary_search(int *array, size_t size, int value)
{
	if (!array)
		return (-1);
	return (binary_recur(array, 0, size - 1, value));
}
/**
* binary_recur - searches for a value in a sorted array recursively
*
* @array: Pointer to the beginning of an array
* @start: starting index
* @end: ending index
* @value: value to search for
*
* Return: Nothing
*/
int binary_recur(int *array, size_t start, size_t end, int value)
{
	int middle;
	size_t i;

	printf("Searching in array: ");
	for (i = start; i <= end - 1; i++)
		printf("%i, ", array[i]);
	printf("%i\n", array[i]);

	middle = (start + end) / 2;

	if (array[middle] == value)
		return (middle);

	if (start == end)
		return (-1);

	if (array[middle] < value)
		return (binary_recur(array, middle + 1, end, value));
	else
		return (binary_recur(array, start, middle - 1, value));
}
