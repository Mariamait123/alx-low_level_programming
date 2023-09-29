#include "main.h"
int a_sqrt_recursion(int a, int i);
/**
  *_sqrt_recursion - find natural square root of a number
  *@n: input integer
  *Return: square root
  *retuns -1 for error
  */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (a_sqrt_recursion(n, 0));
}
/**
  *a_sqrt_recursion - help find square root
  *@a: input whose square root if found
  *@i: first number used to find square root
  *Return: square root
  *retuns -1 for error
  */
int a_sqrt_recursion(int a, int i)
{
	if (i * i > a)
		return (-1);
	if (i * i == a)
		return (i);
	return (a_sqrt_recursion(a, i + 1));
}
