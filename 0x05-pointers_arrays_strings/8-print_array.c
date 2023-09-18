#include "main.h"
#include <stdio.h>
/**
  *print_array - prints n elements of an array
  *@n: no of emelents printed
  *@a: input array
  */
void print_array(int *a, int n)
{
	int t = 0;

	while (t < n)
	{
		if (t != (n - 1))
			printf("%d, ", a[t]);
		else
			printf("%d", a[t]);
		t++;
	}
	printf("\n");
}
