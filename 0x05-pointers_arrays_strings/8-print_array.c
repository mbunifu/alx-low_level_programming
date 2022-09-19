#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers
 * @a: array being tested
 * @n: number of elements in the array
 */

void print_array(int *a, int n)
{
	int length;

	for (length = 0; length < n; length++)
	{
		printf("%d", a[length]);
		if (length != n - 1)
			printf(", ");
	}
	printf("\n");
}
