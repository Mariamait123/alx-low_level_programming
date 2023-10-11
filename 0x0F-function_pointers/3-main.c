#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
  *main - entery point
  *@argc: number of arguments inputs
  *@argv: input arguments
  *Return: always 0
  */
int main(int argc, char *argv[])
{
	int i = 1, a, b;
	char *c;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	c = argv[2];
	a = atoi(argv[i]);
	i += 2;
	b = atoi(argv[i]);
	if (get_op_func(c) == NULL || c[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	if ((c[0] == '%' || c[0] == '/') &&
			b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", get_op_func(c)(a, b));
	return (0);
}
