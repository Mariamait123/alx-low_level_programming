#include <stdio.h>
/**
  *main - Entery point
  *@argc: number of argument
  *@argv: argument values
  *Return: always 0
  */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
