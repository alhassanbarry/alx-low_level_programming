#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints its name
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: Always zero
 */
int main(int argc, char **argv)
{
	int x, y;

	if (argc < 3)
	{
		printf("ERROR\n");
		return (1);
	}

	x = atoi(argv[1]);
	y = atoi(argv[2]);
	printf("%d\n", x * y);

	return (0);
}

