#include <stdio.h>

/**
 * main - prints number of args
 * @argc: number of arguments
 * @argv: array of pointers to those arguments
 * Return: Always 0 on success
 */

int main(int argc, char *argv[])
{
	if (argv)
		printf("%d\n", argc - 1);
	return (0);
}
