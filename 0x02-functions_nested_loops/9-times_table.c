#include "main.h"

/**
 * times_table - prints x by x muiltiplication table
 * Return: Always 0 success
 */
void times_table(void)
{
	int i, j, result;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			result = i * j;
			if (j != 0)
			{
				_putchar(',');
				_putchar(' ');
			}
			if (j == 0)
				_putchar('0');
			else if (result >= 10)
			{
				_putchar((result / 10) + '0');
				_putchar(result % 10 + '0');
			}
			else if ((result < 10) && (j != 0))
			{
				_putchar(' ');
				_putchar((result % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
