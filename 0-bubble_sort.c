#include <stdio.h>
#include "sort.h"


/**
 * bubble_sort - bubble sort algorithm
 * @array: pointer to array to sort
 * @size: number of elements
*/

void bubble_sort()
{
	int array[] = {19, 48, 99, 71, 13, 52, 96, 73, 86, 7};
	int len = 9;

	for (int i = 0; i < len; i++)
	{
		printf(array[i]);
	}

}
