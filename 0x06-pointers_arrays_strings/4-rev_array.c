#include "main.h"

/**
 * reverse_array -  function entry point
 * @a: array of ints
 * @n: number of elements
 * Return: Void
 */
void reverse_array(int *a, int n)
{
	int c;
	int b;
	int array[1024];

	b = 0;
	for (c = n - 1; c >= 0; c--)
	{
		array[b] = a[c];
		b++;
	}
	for (c = 0; c < n; c++)
		*(a + c) = array[c];
}
