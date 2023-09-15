#include "main.h"
/**
  *print_diagonal - print_diagonal
  *@n:  number of times the character \ should be printed
  */
void print_diagonal(int n)
{
	int i, j;

	if (n > 0)
	{
		for (i = 1; i <= n; i++)
		{
			for (j = 1; j <= n; j++)
			{
				if (j == i)
				{
					_putchar('\\');
					break;
				}
				else
					_putchar(' ');
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
