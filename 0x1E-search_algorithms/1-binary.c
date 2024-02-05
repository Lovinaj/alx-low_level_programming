#include <stdio.h>

#include "search_algos.h"

/**
 * binary_search - function that searches for a value in a sorted array of
 *		   integers using the Binary search algorithm
 *
 * @array: pointer to the first element of the array to search in
 * @size: the number of elements in the array
 * @value: the value to search for
 *
 * Return: return the index where @value is located
*/

int binary_search(int *array, size_t size, int value)
{
	size_t left, right, mid;

	left = 0;
	right = size - 1;

	if (array == NULL)
		return (-1);

	if (size == 1)
		return (array[i]);

	printf("Searching in array: ");
	for (size_t i = 0; i < size; i++)
	{
		printf("%d ", array[i]);
	}

	while (left <= right)
	{
		mid = (left + right) / 2;
		/*Value found, return the index*/
		if (value == array[mid])
			return (mid);
		else if (value < array[mid])
		/*If value is smaller, search the left half*/
			right = mid - 1;
		else
		/*If value is greater, search the right half*/
			left = mid + 1;
		printf("Searching in subarray: ");
		for (size_t i = left; i <= right; ++i)
		{
			printf("%d ", array[i]);
		}
		printf("\n");
	}

	return (-1);
}
