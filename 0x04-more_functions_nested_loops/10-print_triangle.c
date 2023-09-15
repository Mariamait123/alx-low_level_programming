#include "main.h"
/**
  *print_triangle - prints triangle
  *@size: size of the triangle
  */
void print_triangle(int size)
{
	int a, b;

	if (size < 1)
		_putchar('\n');
	else
	{
		for (a = size; a >= 1; a--)
		{
			for (b = 1; b <= size; b++)
			{
				if (b < a)
					_putchar(' ');
				else
					_putchar('#');
			}
			_putchar('\n');
		}
	}
}
