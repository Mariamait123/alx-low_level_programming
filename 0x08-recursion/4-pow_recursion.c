#include "main.h"
/**
  *_pow_recursion - dose power function
  *@x: base number
  *@y: exponential number
  *Return: value of x raised to the power of y
  *return -1 for error
  */
int _pow_recursion(int x, int y)
{
	int res;

	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	res = x * _pow_recursion(x, y - 1);
	return (res);
}
