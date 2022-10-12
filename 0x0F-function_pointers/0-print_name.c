#include <stdio.h>
#include "functon_ponters.h"

/**
 * print_name - prints a name as is
 * @name: name of the person
 * @f: is pointer
 * @f: is pointer
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	{
		return;
	}
	else
	{
		f(name);
	}
}
