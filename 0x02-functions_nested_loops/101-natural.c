#include "main.h"
#include <stdio.h>
/**
 * main - sum of multiples of 3,5 below 1024
 * Return: 0 code successful
 */

int main(void)
{
	int a, b, total;

	b = 1024;
	total = 0;

	for (a = 0; a < b; a++)
	{
		if ((a % 3 == 0) || (a % 5 == 0))
		{
			total = total + a;
		}
		else
		{
			continue;
		}
	}

	printf("%d", total);
	printf("\n");

	return (0);
}
