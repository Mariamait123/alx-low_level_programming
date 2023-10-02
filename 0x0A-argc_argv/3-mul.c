#include <stdio.h>
#include <stdlib.h>
/**
  *main - Entery point
  *@argc: number of arguments
  *@argv: argument values
  *Return: 0 for two number input
  *returns 1 otherwise
  */
int main(int argc, char *argv[])
{
	int a;

	if (argc == 3)
	{
		a = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", a);
		return (0);
	}
	printf("Error\n");
	return (1);
}
