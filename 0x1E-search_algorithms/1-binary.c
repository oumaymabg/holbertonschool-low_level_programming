#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * binary_search - searches for a value in an array of integers using
 * the Binary search algorithm
 * @array: pointer to the interger array to search through
 * @size: number of elements in array
 * @value: value to search for in array
 *
 * Return: The first index where value is located
 *         -1 if array is NULL
 *         -1 if the value is not present in array
 */
int binary_search(int *array, size_t size, int value)
{
	size_t i,  low = 0, high = size - 1, mid;

	if (!array)
		return (-1);
	while (low <= high)
	{
		printf("Searching in array: ");
		for (i = low; i < high; i++)
			printf("%i, ", array[i]);
		printf("%i\n", array[i]);
		mid = (low + high) / 2;
		if (array[mid] == value)
			return ((int)mid);
		else if (array[mid] > value)
			high = mid - 1;
		else
			low = mid + 1;
	}
	return (-1);
}
