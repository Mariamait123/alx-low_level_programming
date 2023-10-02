#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
/**
  *check - check for integer
  *@s: input string
  *Return: 1 for integers, 0 otherwise
  */
int check(char *s)
{
	unsigned int a = 0;

	for (; a < strlen(s); a++)
		if (!isdigit(s[a]))
			return (0);
	return (1);
}
/**
  *main - Entery point
  *@argc: number of argumnets
  *@argv: arguments value
  *Return: 0 for success
  *returns 1 for none integer inputs
  */
int main(int argc, char *argv[])
{
	int a, sum = 0;

	for (a = 1; a < argc; a++)
	{
		if (check(argv[a]))
			sum += atoi(argv[a]);
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", sum);
	return (0);
}
