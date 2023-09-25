#include "main.h"
/**
  *print_chessboard - prints the chessboard
  *@a: input char
  */
void print_chessboard(char (*a)[8])
{
	int s;
	int d;

	for (s = 0; s < 8; s++)
	{
		for (d = 0; d < 8; d++)
			_putchar(a[s][d]);
		_putchar('\n');
	}
}
