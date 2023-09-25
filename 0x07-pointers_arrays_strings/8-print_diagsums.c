#include "main.h"
#include <stdio.h>
/**
  *print_diagsums - prints the sum of the two diagonals
  *@a: array input
  *@size: input int
  */
void print_diagsums(int *a, int size)
{
	int s;
	int sum = 0, sum1 = 0;

	for (s = 0; s < size; s++)
	{
		sum = sum + a[s * size + s];
	}
	printf("%d, ", sum);
	for (s = size - 1; s >= 0; s--)
	{
		sum1 = sum1 + a[s * size + (size - s - 1)];
	}
	printf("%d\n", sum1);
}
