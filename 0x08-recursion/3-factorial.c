#include "main.h"
/**
  *factorial - finds factorial of n
  *@n: input integer
  *Return: factorial of n
  *returns -1 for error
  */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 1 || n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
